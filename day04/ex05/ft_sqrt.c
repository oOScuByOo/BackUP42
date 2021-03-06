/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 23:01:56 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/06 10:55:12 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while (i <= 46341 && i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
