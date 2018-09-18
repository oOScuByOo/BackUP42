/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:42:34 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/16 20:27:01 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	make_operation(int *n1, int n2, char operateur)
{
	if (operateur == '+')
		*n1 += n2;
	else if (operateur == '-')
		*n1 -= n2;
	else if (operateur == '*')
		*n1 *= n2;
	else if (n2 != 0)
	{
		if (operateur == '/')
			*n1 /= n2;
		else if (operateur == '%')
			*n1 %= n2;
	}
}

int		get_nbr_value(char **str)
{
	int n;

	if (**str == '(')
	{
		*str += 1;
		n = basic_operations(str);
		if (**str == ')')
			*str += 1;
		return (n);
	}
	n = ft_atoi(str);
	return (n);
}

int		advanced_operations(char **str)
{
	int		n1;
	int		n2;
	char	operateur;

	n1 = get_nbr_value(str);
	while (**str)
	{
		operateur = **str;
		if (is_basic_operator(operateur) || operateur == ')')
			return (n1);
		*str += 1;
		n2 = get_nbr_value(str);
		make_operation(&n1, n2, operateur);
	}
	return (n1);
}

int		basic_operations(char **str)
{
	int		n1;
	int		n2;
	char	operateur;

	n1 = advanced_operations(str);
	while (**str)
	{
		operateur = **str;
		if (!is_basic_operator(operateur))
			return (n1);
		*str += 1;
		n2 = advanced_operations(str);
		make_operation(&n1, n2, operateur);
	}
	return (n1);
}

int		eval_expr(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			str[n++] = str[i];
		i++;
	}
	str[n] = '\0';
	return (basic_operations(&str));
}
