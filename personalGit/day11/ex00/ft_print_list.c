/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:30:55 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/22 14:36:29 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

void	print_list(t_list *list);
int		ft_putchar(char c);
void	ft_putstr(char *str);

void print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
			str++;
	}
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
		return (0);
}
