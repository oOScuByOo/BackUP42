/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:09:52 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/17 18:10:04 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *current;
	t_list *previous;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	current = *begin_list;
	while (current != 0)
	{
		previous = current;
		current = current->next;
		free(previous);
	}
	*begin_list = 0;
}
