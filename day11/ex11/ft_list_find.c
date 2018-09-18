/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:11:55 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/17 18:12:03 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;

	current = begin_list;
	while (current != 0)
	{
		if (cmp(current->data, data_ref) == 0)
			return (current);
		current = current->next;
	}
	return (0);
}
