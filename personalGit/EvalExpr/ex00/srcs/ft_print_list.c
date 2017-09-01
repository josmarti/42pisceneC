/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:30:55 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/27 22:30:22 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list *list);
void	ft_putchar(char c);
void	ft_putstr(char *str);

void	print_list(t_list *list)
{
	while (list->next != NULL)
	{
		ft_putstr(list->data);
		list = list->next;
	}
	ft_putstr(list->data);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
