/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:44:37 by bebosson          #+#    #+#             */
/*   Updated: 2018/09/09 23:07:18 by bebosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

int	not_in_line2(int number, int grid[9][9], int line)
{
	int	col;
	int	bouly;

	bouly = 0;
	col = 0;
	while (col < 9)
	{
		if (grid[line][col] == number)
			bouly++;
		col++;
	}
	if (bouly > 1)
		return (0);
	else
		return (1);
}

int	not_in_bloc2(int number, int grid[9][9], int line, int col)
{
	int	blocx;
	int	blocy;
	int	bouly;

	bouly = 0;
	blocy = line - (line % 3);
	blocx = col - (col % 3);
	line = blocy;
	while (line < blocy + 3)
	{
		col = blocx;
		while (col < blocx + 3)
		{
			if (grid[line][col] == number)
				bouly++;
			col++;
		}
		line++;
	}
	if (bouly > 1)
		return (0);
	else
		return (1);
}

int	ft_last_check(int grid[9][9])
{
	int	number;
	int	col;
	int	line;

	line = 0;
	while (line < 9)
	{
		col = 0;
		while (col < 9)
		{
			number = grid[line][col];
			if (!not_in_line2(number, grid, line)
					|| !not_in_column2(number, grid, col)
					|| !not_in_bloc2(number, grid, line, col))
				return (0);
			col++;
		}
		line++;
	}
	return (1);
}

int	solve_sudoku(int grid[9][9], int position, int start, int line)
{
	int	number;
	int	stop;
	int	col;

	number = start;
	stop = (start == 1) ? 10 : 0;
	line = position / 9;
	col = position % 9;
	if (position == 81)
		return (1);
	if (grid[line][col] != 0)
		return ((solve_sudoku(grid, position + 1, start, line)) ? 1 : 0);
	while (number != stop)
	{
		if (not_in_line(number, grid, line) && not_in_column(number, grid, col)
				&& not_in_bloc(number, grid, line, col))
		{
			grid[line][col] = number;
			if (solve_sudoku(grid, position + 1, start, line))
				return (1);
		}
		number += (start == 1) ? 1 : -1;
	}
	grid[line][col] = 0;
	return (0);
}

int	launch(int grid[9][9], int argc, char **argv, int rev)
{
	int line;

	line = 0;
	transformer_grid(grid, argv, argc);
	return (solve_sudoku(grid, 0, (!rev) ? 1 : 9, line));
}
