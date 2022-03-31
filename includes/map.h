/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:11:56 by bbelen            #+#    #+#             */
/*   Updated: 2022/03/31 08:22:03 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

#include "../cub3d.h"

typedef struct	s_valid_syms
{
	char    wall;
    char    empty;
    char    dir[4];
}				t_valid_syms;

typedef struct s_map
{
	int ok;
    int bla;
}				t_map;

t_map	init_map(char *filename);

#endif