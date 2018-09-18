/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:46:43 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/16 20:29:59 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/functions.h"

char	*read_file(int fd)
{
	int		read_amount;
	char	buffer[BUFSIZE];
	char	*output;

	output = malloc(1);
	if (output == 0 || fd < 0)
		return (0);
	output[0] = 0;
	while (output && (read_amount = read(fd, buffer, BUFSIZE)) > 0)
		output = concat_strings(output, buffer, read_amount);
	if (read_amount == -1)
		return (0);
	return (output);
}

char	*concat_strings(char *dest, char *src, int amount)
{
	int		i;
	int		dest_len;
	char	*tmp;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	if ((tmp = malloc(dest_len + amount + 1)) == NULL)
		return (0);
	tmp = ft_strncpy(tmp, dest, dest_len);
	i = 0;
	while (i < amount)
	{
		tmp[dest_len + i] = src[i];
		i++;
	}
	tmp[dest_len + i] = '\0';
	free(dest);
	return (tmp);
}
