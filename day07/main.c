/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:28:09 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/17 21:30:05 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void		ft_print_words_tables(char **tab);
char		**ft_split_whitespaces(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

#include "ex04/ft_split_whitespaces.c"

void		ex04_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		ft_putchar(*(str + i++));
}

void		ex04()
{
	char **allw;

	allw = ft_split_whitespaces("jaimelesgroszgeg");
	while (*allw != '\0')
	{
		ex04_putstr(*allw);
		ft_putchar('\n');
		allw++;
	}
}

#include "ex05/ft_print_words_tables.c"

void		ex05()
{
	char **allw;

	allw = ft_split_whitespaces(" Je veuT\nbouffer ton\tboul");
	ft_print_words_tables(allw);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s\nusage:\texercice\n", argv[0]);
	else
	{
		if (strcmp("4", argv[1]) == 0)
			ex04();
		if (strcmp("5", argv[1]) == 0)
			ex05();
		return (0);
	}
}
