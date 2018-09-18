/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 22:04:44 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/13 13:54:34 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int			main(int argc, char **argv)
{
	int		i;
	int		lycos;
	char	*tampon;

	lycos = 1;
	while (lycos)
	{
		lycos = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tampon = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tampon;
				lycos = 1;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
		putstr(argv[i++]);
	return (0);
}
