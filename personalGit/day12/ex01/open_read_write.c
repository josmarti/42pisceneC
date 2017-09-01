/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read_write.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 11:59:40 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/24 19:34:10 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define BUF_SIZE 10

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int			ft_check_args(int ar)
{
	if (ar != 2)
	{
		if (ar < 2)
			ft_putstr("File Name missing.\n");
		else
			ft_putstr("Too many arguments.\n");
		return (-1);
	}
	return (1);
}

int			main(int argc, char **argv)
{
	int		file;
	int		red;
	char	buf[BUF_SIZE + 1];

	if (ft_check_args(argc) != 1)
		return (0);
	file = open(*++argv, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Open Failed Error");
		return (0);
	}
	while ((red = read(file, buf, BUF_SIZE)))
	{
		buf[red] = '\0';
		ft_putstr(buf);
	}
	if (close(file) == -1)
	{
		ft_putstr("Open Failed Error");
		return (0);
	}
	return (1);
}
