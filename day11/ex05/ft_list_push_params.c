/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:09:15 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/18 16:33:48 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *begin_list;
	t_list *previous;
	t_list *current;

	if (ac == 0 || av == 0)
		return (0);
	begin_list = 0;
	while (--ac >= 0)
	{
		current = ft_create_elem(av[ac]);
		if (begin_list != 0)
			previous->next = current;
		else
			begin_list = current;
		previous = current;
	}
	return (begin_list);
}
