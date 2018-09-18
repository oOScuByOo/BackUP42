/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:18:22 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/17 16:10:00 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (*str++ != '\0')
		a++;
	return (a);
}

char		*ft_strdup(char *src)
{
	char *str;
	int  length_src;
	int  i;

	i = 0;
	length_src = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (length_src + 1));
	while (i < length_src)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
