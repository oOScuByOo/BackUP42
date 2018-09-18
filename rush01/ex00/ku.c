/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ku.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:35:04 by bebosson          #+#    #+#             */
/*   Updated: 2018/09/09 23:04:55 by bebosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

int	not_in_line(int number, int grid[9][9], int line)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (grid[line][col] == number)
			return (0);
		col++;
	}
	return (1);
}

int	not_in_column(int number, int grid[9][9], int col)
{
	int	line;

	line = 0;
	while (line < 9)
	{
		if (grid[line][col] == number)
			return (0);
		line++;
	}
	return (1);
}

int	not_in_bloc(int number, int grid[9][9], int line, int col)
{
	int	blocx;
	int	blocy;

	blocy = line - (line % 3);
	blocx = col - (col % 3);
	line = blocy;
	while (line < blocy + 3)
	{
		col = blocx;
		while (col < blocx + 3)
		{
			if (grid[line][col] == number)
				return (0);
			col++;
		}
		line++;
	}
	return (1);
}

int	is_input_clean(int argc, char **argv)
{
	int	i_argv;
	int	i_word;
	int	count;

	i_argv = 1;
	if (argc != 10)
		return (0);
	while (i_argv < argc)
	{
		count = 0;
		i_word = 0;
		while (argv[i_argv][i_word] != '\0')
		{
			if ((!(argv[i_argv][i_word] >= '0' && argv[i_argv][i_word] <= '9'))
					&& (!(argv[i_argv][i_word] == '.')))
				return (0);
			count++;
			i_word++;
		}
		if (count != 9)
			return (0);
		i_argv++;
	}
	return (1);
}
