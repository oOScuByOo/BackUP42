/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:55:41 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/19 14:02:01 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int **t;

	ft_ultimate_range(t, 2, 15);
	if (**t)
		printf("%d\n", t[0][1]);
	return (0);
}
