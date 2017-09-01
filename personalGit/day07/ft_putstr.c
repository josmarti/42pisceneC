/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:05:51 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/17 14:10:23 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int     ft_putchar(char c)
{
	write(1, &c, 1); 
	return (0); 
}	
void    ft_putstr(int *str)
{
	while (*str)
	{
		ft_putchar('0' + *str);
		str++;
	}
	ft_putchar('!');
}
