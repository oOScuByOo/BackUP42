/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:12:09 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/20 18:20:59 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		move_forward(t_list **current, t_list **previous)
{
	*previous = *current;
	*current = (*current)->next;
}

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *previous;
	t_list *current;
	t_list *next;

	current = begin_list != NULL ? *begin_list : NULL;
	while (current != NULL && cmp(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
		current = *begin_list;
	}
	if ((previous = current) != NULL)
		current = previous->next;
	while (current != NULL)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			next = previous->next->next;
			free(current);
			current = next;
			previous->next = current;
			continue ;
		}
		move_forward(&current, &previous);
	}
}
