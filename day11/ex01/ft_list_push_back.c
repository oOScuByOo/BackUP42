/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:31:30 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/17 17:56:03 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		current = *begin_list;
		while (current->next != NULL)
			current = current->next;
		current->next = ft_create_elem(data);
	}
}
