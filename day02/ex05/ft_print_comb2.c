/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 23:57:56 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/04 11:53:44 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = -1;
	while (++num1 <= 98)
	{
		num2 = num1;
		while (++num2 <= 99)
		{
			ft_putchar((num1 / 10) + '0');
			ft_putchar((num1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((num2 / 10) + '0');
			ft_putchar((num2 % 10) + '0');
			if (num1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
