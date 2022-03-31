/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 05:59:10 by bbelen            #+#    #+#             */
/*   Updated: 2022/03/31 14:25:41 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/error.h"
// #include "../cub3d.h"

int	error_args(void)
{
	ft_putstr_fd("Error: Invalid number of arguments\n", 0);
	return (ERROR_ARGS);
}

int	error_map_file(void)
{
	ft_putstr_fd("Error: Invalid file\n", 0);
	return (ERROR_MAP_FILE);
}

void	error_exit(int error, t_config *conf)
{
	if (error == ERROR_MAP_FILE)
		ft_putstr_fd("Error: Invalid file\n", 0);
	free_config(conf);
	exit(error);
}