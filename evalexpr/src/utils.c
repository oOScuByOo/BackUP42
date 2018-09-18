/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:42:45 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/16 20:27:46 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

int		ft_atoi(char **str)
{
	int result;
	int mult;

	result = 0;
	mult = 1;
	if (**str == '-')
	{
		*str += 1;
		mult = -1;
	}
	while (**str >= '0' && **str <= '9')
	{
		result = result * 10 + **str - '0';
		(*str) += 1;
	}
	return (result * mult);
}

int		is_basic_operator(char operator)
{
	return (operator == '+' || operator == '-');
}
