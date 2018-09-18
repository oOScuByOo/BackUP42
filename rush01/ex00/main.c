/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:55:42 by bebosson          #+#    #+#             */
/*   Updated: 2018/09/09 23:08:20 by bebosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

int	main(int argc, char **argv)
{
	int		grid[9][9];
	int		normal;
	int		revers;

	if (is_input_clean(argc, argv) == 1)
	{
		normal = launch(grid, argc, argv, 0);
		revers = launch(grid, argc, argv, 1);
		if (normal != revers)
		{
			write(1, "Error", 5);
			return (0);
		}
		else if ((normal == revers) && ft_last_check(grid))
			ft_print_grid(grid);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
