/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:31:04 by bbelen            #+#    #+#             */
/*   Updated: 2022/03/31 14:22:22 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

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

int	open_map_file(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return(ERROR_MAP_FILE);
}

int	fill_map_from_file(char *filename, t_map *map)
{
	int	fd;

	fd = open_map_file(filename);
}

int	init_map(char *filename, t_map *map)
{
	int	error_status;

	error_status = validate_filename(filename);
	if (error_status)
		return (error_status);
	map = (t_map**)malloc(sizeof(t_map));
	error_status = fill_map_from_file(filename, map);
	return (error_status);
}
