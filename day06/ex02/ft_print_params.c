/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:25:43 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/13 13:54:48 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			main(int argc, char **argv)
{
	int i;
	int arguments;

	arguments = 1;
	while (arguments < argc)
	{
		i = 0;
		while (argv[arguments][i])
			ft_putchar(argv[arguments][i++]);
		ft_putchar('\n');
		arguments++;
	}
	return (0);
}
