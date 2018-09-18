/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:52:22 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/02 18:34:01 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(c)
{
	write(1, &c, 1);
}

int		ft_lines_to_skip(stairs)
{
	return (((stairs) % 2 + (stairs) / 2+ 1));
}

int		ft_last_line_number(stairs)
{
	if (stairs == 1)
		return (3);
	else
		return (stairs + 2 + ft_lines_to_skip(stairs) + ft_last_line_number(stairs - 1));
}

void		ft_print_line(int n, int last_line_number)
{
	int offset;
	int point;

	offset =(3 + last_line_number * 2) / 2 - n - 1;
	while(offset--)
		ft_putchar(' ');
	ft_putchar('/');
	point = 1 + n * 2;
	while (point--)
		ft_putchar('*');
	ft_putchar('\\');
	ft_putchar('\n');
}

void		sastantua(int stairs)
{
	int i;
	int base_stair;
	int stair_actual;

	stair_actual = 1;
	base_stair = 2 + 1 + (stairs- 1) * 2;
	if (stairs > 0)
	{
		i = 0;
		while (i <= ft_last_line_number(stairs))
		{
			if (i == ft_last_line_number(stair_actual))
			{
				i = i + ft_lines_to_skip(stair_actual);
				stair_actual++;
			}
			ft_print_line( i, ft_last_line_number(stairs));
			i++;
		}
	}
}

int		main(void)
{
	sastantua(4);
	return (0);
}
