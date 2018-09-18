/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:41:51 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/05 14:58:55 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	char *resultat;
	char *debut;
	char *fin;
	char memoire;

	resultat = str;
	debut = str;
	fin = str;
	while (*fin != '\0')
		fin++;
	fin--;
	while (debut < fin)
	{
		memoire = *debut;
		*debut = *fin;
		*fin = memoire;
		debut++;
		fin--;
	}
	return (resultat);
}
