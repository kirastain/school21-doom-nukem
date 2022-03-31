/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:33:36 by bbelen            #+#    #+#             */
/*   Updated: 2022/03/31 14:08:14 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/config.h"

int	init_config(t_config *conf)
{
	conf->map = NULL;
	conf->error = 0;
}

int	fill_config(t_config *conf, char *filename)
{
	conf->error = init_map(filename, conf->map);

	return (0);
}

void	free_config(t_config *conf)
{
	free(conf->map);
}
