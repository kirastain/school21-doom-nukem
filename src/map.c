/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:31:04 by bbelen            #+#    #+#             */
/*   Updated: 2022/03/31 08:26:25 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map.h"

static int	vallidate_extension(char *filename)
{
	return (0);
}

int	validate_filename(char *filename)
{
	int		i;
	int		len_filename;
	char	*pos;

	i = 0;
	len_filename = ft_strlen(filename);
	pos = ft_strchr(filename, '.');
	if (!pos)
		return (error_map_file());
	if ((len_filename - (pos - filename)) < 4)
		return (error_map_file());
	pos++;
	if (*pos != 'c')
		return (error_map_file());
	pos++;
	if (*pos != 'u')
		return (error_map_file());
	pos++;
	if (*pos != 'b')
		return (error_map_file());
	return (0);
}

t_map	init_map(char *filename)
{
	t_map	map;

	return (map);
}
