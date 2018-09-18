/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 19:34:18 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/11 18:34:04 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int offset;

	i = 0;
	offset = 0;
	while (dest[offset] != '\0')
		offset++;
	while (i < nb && src[i] != '\0')
	{
		dest[offset + i] = src[i];
		i++;
	}
	dest[offset + i] = '\0';
	return (dest);
}
