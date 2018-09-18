/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 19:05:29 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/16 20:29:45 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/functions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar('0' + nbr % 10);
}

void	print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	print_colle(t_tab file, int colle)
{
	int i;
	int count;

	if ((count = count_bits(colle)) == 0)
		print("pas de correspondance");
	i = 0;
	while (i < 32 && count)
	{
		if (colle & 1)
		{
			print("[");
			print((char*)c_names[i]);
			print("]");
			print(" [");
			ft_putnbr(file.max_width);
			print("] [");
			ft_putnbr(file.length);
			print("]");
			if (--count != 0)
				print(" || ");
		}
		colle >>= 1;
		i++;
	}
	print("\n");
}