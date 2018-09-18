/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:31:12 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/13 13:54:11 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			main(int argc, char **argv)
{
	int i;

	while (--argc > 0)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			ft_putchar(argv[argc][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
