/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 12:41:23 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/18 12:42:05 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *output;
	int i;

	if (max - min <= 0 || (output = malloc(sizeof(int) * (max - min))) == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		output[i] = min + i;
		i++;
	}
	*range = output;
	return (max - min);
}
