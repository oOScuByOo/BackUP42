/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 15:40:10 by tmolinar          #+#    #+#             */
/*   Updated: 2018/09/18 15:40:24 by tmolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "utils.h"

void	read_file(char *filename)
{
	int		fd;
	char	buffer[2];

	fd = open(filename, O_RDONLY);
	buffer[1] = '\0';
	if (fd == -1)
	{
		print("cat: ");
		print(filename);
		print(": No such file or directory\n");
		return ;
	}
	while (read(fd, buffer, 1) > 0)
		print(buffer);
	close(fd);
}

void	read_input(void)
{
	char	buffer[2];

	buffer[1] = '\0';
	while (read(0, buffer, 1) > 0)
		print(buffer);
}

int		main(int argc, char **argv)
{
	int		i;
	char	buffer[2];

	i = 1;
	buffer[1] = '\0';
	while (i < argc)
	{
		if (ft_strcmp("-", argv[i]) != 0)
			read_file(argv[i]);
		else
			read_input();
		i++;
	}
	if (argc == 1)
		read_input();
	return (0);
}
