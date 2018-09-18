/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:48:23 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/16 20:30:52 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/functions.h"

int		count_bits(int colle)
{
	int count;

	count = 0;
	while (colle != 0)
	{
		count += colle & 1;
		colle >>= 1;
	}
	return (count);
}

int		get_colle_from_bit(int colle)
{
	int count;

	count = 0;
	while (colle != 0)
	{
		if (colle & 1)
			return (count);
		colle >>= 1;
		count++;
	}
	return (0);
}

int		find_character(char *str, char c, int end)
{
	while (--end >= 0)
	{
		if (str[end] == c)
			return (end);
	}
	return (-1);
}
