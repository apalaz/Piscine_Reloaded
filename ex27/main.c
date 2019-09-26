/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:44:15 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/03 17:39:45 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "files.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUFF_SIZE + 1];
	int		ret;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, BUFF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	else if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}
