/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:56:29 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/12 14:24:31 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strcapitalize(char *str);
char		*ft_strlowcase(char *str);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strupcase(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
int		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, int nb);


/****** MAIN FT_STRLOWCASE ******
*******************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_strlowcase(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STRCAPITALIZE ******
********************************
int		main(void)
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s \n", test);
	printf("%s \n", ft_strcapitalize(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STRCPY ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_strcpy(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STRNCPY******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_strncpy(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STRSTR ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_strstr(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STRCMP ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_strncmp(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STRNCMP ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_strncmp(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STRUPCASE ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_strupcase(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STR_IS_ALPHA ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_str_is_alpha(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STR_IS_NUMERIC ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_str_is_numeric(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STR_IS_LOWERCASE ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_str_is_lowercase(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STR_IS_UPPERCASE ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_str_is_uppercase(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STR_IS_PRINTABLE ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_str_is_printable(test));
	return (0);
}
*******************************
*******************************/


/****** MAIN FT_STRCAT ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_strcat(test));
	return (0);
}
*******************************
*******************************/

/****** MAIN FT_STRNCAT ******
********************************
int		main(void)
{
	char test[] = "SALUT";
	printf("%s \n", test);
	printf("%s \n", ft_strncat(test));
	return (0);
}
*******************************
*******************************/
