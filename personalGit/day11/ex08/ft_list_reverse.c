/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 21:26:24 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/23 19:36:09 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
int			get_list_length(t_list *begin_list)
{
	int length;

	length = 0;
	while (begin_list->next != NULL)
	{
		*begin_list = *begin_list->next;
		length++;
	}
	printf("%i\n", length);
	return (length);
}

void		ft_list_reverse(t_list **begin_list)
{
	int length;
	t_list *curr;
	t_list *prev;

	length = 0;
	curr = *begin_list;
	length = get_list_length(*begin_list);
	while (length + 1 / 2 > 0)
	{
		curr = *begin_list;
		while (curr->next != NULL)
		{
			prev = curr;
			curr = curr->next;
			prev->next = curr->next;
			curr->next = prev;
			curr = curr->next;
			print_list(curr);	
		}
		length--;
	}
}







