/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:18:40 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/13 13:51:59 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[0][i])
		ft_putchar(argv[0][i++]);
	(void)argc;
	ft_putchar('\n');
	return (0);
}
