/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:18:45 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/17 20:56:15 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ret;
	int count;
	int i;

	if (min >= max)
	{
		ret = 0;
		return (ret);
	}
	else
	{
		count = max - min;
		ret = (int*)malloc(sizeof(*ret) * count);
		i = 0;
		while (min < max)
		{
			ret[i] = min;
			min++;
			i++;
		}
	}
	return (ret);
}


