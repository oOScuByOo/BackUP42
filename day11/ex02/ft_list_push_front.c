/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:33:02 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/20 18:19:01 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *front;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		front = ft_create_elem(data);
		if (front != NULL)
		{
			front->next = *begin_list;
			*begin_list = front;
		}
	}
}
