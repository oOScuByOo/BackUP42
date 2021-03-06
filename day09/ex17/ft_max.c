/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:21:02 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/07 14:50:08 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_max(int *tab, int length)
{
	int i;
	int max;

	i = 0;
	max = 0;
	while (i < n)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
