/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:27:23 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/18 16:27:59 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *output;
	int i;

	i = 0;
	if ((output = malloc(sizeof(int) * length)) == NULL)
		return (0);
	while (i < length)
	{
		output[i] = f(tab[i]);
		i++;
	}
	return (output);
}
