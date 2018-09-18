/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:47:47 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/16 20:30:29 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, int dest_len)
{
	int i;

	i = 0;
	while (src[i] && i < dest_len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		match_strings(char *s1, const char s2[32])
{
	int i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i] && s1[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

int		c_find(const char s1[32], char c)
{
	int i;

	i = 0;
	while (s1[i] && i < 32)
	{
		if (s1[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
