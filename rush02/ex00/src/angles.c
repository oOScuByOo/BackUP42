/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   angles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 19:00:06 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/16 20:28:51 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/functions.h"

int	detect_angles(t_tab file)
{
	int detected;

	if (file.length <= 1)
		return (0);
	detected = 0;
	detected |= detect_rect(file);
	return (detected);
}

int	detect_rect(t_tab file)
{
	char	*tmp;
	int		colle;

	colle = 0;
	tmp = malloc(file.max_width * file.length + 1);
	if (tmp == 0)
		return (-1);
	print_rect(tmp, file.max_width, file.length);
	if (match(file.str, tmp))
	{
		colle = COLLE_RECTANGLE;
		if (file.max_width == file.length)
			colle |= COLLE_SQUARE;
	}
	free(tmp);
	return (colle);
}
