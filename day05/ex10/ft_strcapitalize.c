/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 22:44:24 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/12 11:58:45 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	int		espace;

	i = 0;
	while (str[i] != '\0')
	{
		espace = 1;
		if (i == 0)
			c = ';';
		else
			c = str[i - 1];
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			espace = 0;
		if (c >= 48 && c <= 57)
			espace = 0;
		if (espace == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		if (espace == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
