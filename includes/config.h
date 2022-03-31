/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:31:59 by bbelen            #+#    #+#             */
/*   Updated: 2022/03/31 16:08:19 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONFIG_H
# define FT_CONFIG_H

# include "map.h"
# include "../libft/libft.h"

typedef struct	s_config
{
	int		error;
	t_map   *map;
}				t_config;

int	fill_config(t_config *conf, char *filename);
int	init_config(t_config *conf);

#endif