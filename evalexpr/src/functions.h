/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:42:40 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/16 20:27:21 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		eval_expr(char *str);
int		ft_atoi(char **str);
int		basic_operations(char **str);
int		is_basic_operator(char operator);

#endif
