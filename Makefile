# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 04:53:08 by bbelen            #+#    #+#              #
#    Updated: 2022/03/31 08:27:58 by bbelen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d
CC = gcc
MAKE = make
HEADER = /includes/*.h ./*.h

SRC = ./src/map.c ./src/config.c ./main.c ./src/error.c
OBJS = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@cd libft && $(MAKE) bonus
	@cp libft/libft.a libft.a
	@cd mlx && $(MAKE)
	@cp mlx/libmlx.a libmlx.a
	@echo pre done
	@$(CC) -o $(NAME) $(FLAGS) $(OBJS) libft.a -Lmlx -lmlx -framework OpenGL -framework AppKit
	@echo cub3d compiled

%.o:%.c $(HEADER)
	$(CC) $(FLAGS) -Imlx -c $< -o $@

clean:
	@rm -f $(OBJS)
	@$(MAKE) clean -C ./libft
	@$(MAKE) clean -C ./mlx
	@echo object files deleted

fclean: clean
	@rm -f $(NAME)
	@rm -f cub3d.a	
	@rm -f libmlx.a
	@rm -f libft.a
	@$(MAKE) fclean -C ./libft
	@$(MAKE) clean -C ./mlx
	@echo cub3d.a deleted

re: fclean all

.PHONY: all clean fclean re