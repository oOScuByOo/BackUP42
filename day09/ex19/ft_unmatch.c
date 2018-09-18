/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:24:35 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/07 14:29:02 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int recurence;

	i = 0;
	j = 0;
	recurence = 0;
	while (i < length)
	{
		while (j < length)
		{
			if (tab[i] == tab[j])
				recurence++;
			j++;
		}
		if (recurence == 2)
			return (1);
		j = 0;
		recurence = 0;
		i++;
	}
	return (0);
}
