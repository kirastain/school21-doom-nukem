/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 07:08:25 by bbelen            #+#    #+#             */
/*   Updated: 2022/03/31 16:09:07 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "cub3d.h"

int	main(int argc, char **argv)
{
	t_config	conf;

	if (argc != 2)
		return (error_args());
	init_config(&conf);
	return (0);
}
