/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <bbelen@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:01:06 by bbelen            #+#    #+#             */
/*   Updated: 2022/03/31 16:06:19 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H

#include "config.h"

# define ERROR_ARGS     1
# define ERROR_MAP_FILE 2

int error_args();
int error_map_file();
void	error_exit(int error, t_config *conf);

#endif