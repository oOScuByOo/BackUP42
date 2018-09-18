/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:33:46 by bebosson          #+#    #+#             */
/*   Updated: 2018/09/09 23:09:53 by bebosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_grid(int grid[9][9])
{
	int	line;
	int	col;

	line = 0;
	while (line < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(grid[line][col] + '0');
			if (col != 8)
				ft_putchar(' ');
			if (col == 8)
				ft_putchar('\n');
			col++;
		}
		line++;
	}
}

void	transformer_grid(int grid[9][9], char **argv, int argc)
{
	int	line;
	int	col;

	line = 1;
	while (line < argc)
	{
		col = 0;
		while (col < 9)
		{
			if (argv[line][col] == '.')
				grid[line - 1][col] = 0;
			else
				grid[line - 1][col] = argv[line][col] - '0';
			col++;
		}
		line++;
	}
}

int		not_in_column2(int number, int grid[9][9], int col)
{
	int	line;
	int	bouly;

	bouly = 0;
	line = 0;
	while (line < 9)
	{
		if (grid[line][col] == number)
			bouly++;
		line++;
	}
	if (bouly > 1)
		return (0);
	else
		return (1);
}
