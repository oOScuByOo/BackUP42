/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:43:56 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/19 14:01:22 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *t;

	t = ft_range(2, 15);
	if (t)
		printf("%d\n", t[0]);
	return (0);
}
