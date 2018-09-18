/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 22:57:16 by bebosson          #+#    #+#             */
/*   Updated: 2018/09/09 23:32:54 by bebosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_print_grid(int grid[9][9]);
int		not_in_column2(int number, int grid[9][9], int col);
int		not_in_line(int number, int grid[9][9], int line);
int		not_in_column(int number, int grid[9][9], int col);
int		not_in_bloc(int number, int grid[9][9], int line, int col);
int		is_input_clean(int argc, char **argv);
int		not_in_line2(int number, int grid[9][9], int line);
int		not_in_bloc2(int number, int grid[9][9], int line, int col);
int		ft_last_check(int grid[9][9]);
int		solve_sudoku(int grid[9][9], int position, int start, int line);
int		launch(int grid[9][9], int argc, char **argv, int rev);
int		main(int argc, char **av);
void	transformer_grid(int grid[9][9], char **argv, int argc);

#endif
