/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:32:40 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/17 20:48:03 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strdup(char *src);

int		main(void)
{
	char *test = "SALUT GROS cochon 69";
	char *copie;

	copie = ft_strdup(test);
	printf("%s\n", test);
	printf("%s\n", copie);
	return (0);
}
