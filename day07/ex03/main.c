/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:20:42 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/12 20:22:43 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	char *r;

	r = ft_concat_params(argc, argv);
	printf("%s\n", r);
	return (0);
}
