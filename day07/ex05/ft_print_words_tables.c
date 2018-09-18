/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:28:09 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/17 21:14:33 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void		ft_putstr(char *str);

void		ft_print_words_tables(char **tab)
{
	while (*tab != '\0')
	{
		ft_putstr(*tab);
		ft_putchar('\n');
		tab++;
	}
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i++));
	}
}
