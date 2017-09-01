/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:46:46 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/23 19:22:56 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int				ft_list_size(t_list *begin)
{
	t_list		*curr;
	int			length;

	curr = begin;
	length = 0;
	while (curr)
	{
		curr = curr->next;
		length++;
	}
	return (length);
}
