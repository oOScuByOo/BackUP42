/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:49:49 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/16 20:31:09 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/functions.h"

char	*print_carre(char *str, int x)
{
	int i;
	int j;
	int index;

	i = 0;
	index = 0;
	while (i < x)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0 || i == x - 1 || j == 0 || j == x - 1)
				str[index++] = 'x';
			else
				str[index++] = ' ';
			j++;
		}
		str[index++] = '\n';
		i++;
	}
	str[index] = '\0';
	return (str);
}

char	*print_rect(char *str, int x, int y)
{
	int i;
	int j;
	int index;

	i = 0;
	index = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				str[index++] = 'x';
			else
				str[index++] = ' ';
			j++;
		}
		str[index++] = '\n';
		i++;
	}
	str[index] = '\0';
	return (str);
}
