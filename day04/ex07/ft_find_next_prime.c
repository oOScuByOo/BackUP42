/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 23:18:04 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/05 23:25:59 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if ( ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	if ( nb % 2 == 0)
		nb++;
	while (nb < 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb += 2;
	}
	return (-1);
}
