/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:27:27 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/19 13:20:33 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
		i++;
	return (i);
}

int			ft_str_len_max(int argc, char **argv)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (i < argc)
	{
		count = count + ft_strlen(argv[i]);
		i++;
	}
	return (count);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*res;
	int		total;
	int		i;
	int		y;
	int		c;

	total = ft_str_len_max(argc, argv) + argc;
	res = (char*)malloc(sizeof(*res) * total);
	i = 1;
	c = 0;
	while (i < argc)
	{
		y = 0;
		while (argv[i][y] != '\0')
		{
			res[c] = argv[i][y];
			c++;
			y++;
		}
		res[c] = '\n';
		c++;
		i++;
	}
	res[c - 1] = '\0';
	return (res);
}
