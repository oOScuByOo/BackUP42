/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 22:36:02 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/01 22:47:29 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_char(int size, char p_begin, char p_middle, char p_end)
{
	ft_putchar(p_begin);
	while ((size - 1 ) > 1)
	{
		ft_putchar(p_middle);
		size--;
	}
	if (size > 1)
	{
		ft_putchar(p_end);
	}
	ft_putchar('\n');
}

void		rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_char(x, 'A', 'B', 'A');
		y--;
		while ( y > 1)
		{
			ft_print_char(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
		{
			ft_print_char(x, 'C', 'B', 'C');
		}
	}
}

int		main()
{
	rush(5, 5);
	return(0);
}
