/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 05:59:10 by bbelen            #+#    #+#             */
/*   Updated: 2022/03/31 07:58:48 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/error.h"

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
