/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:46:46 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/23 20:00:37 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin, void *data)
{
	t_list *curr;

	if (*begin == NULL)
	{
		*begin = ft_create_elem(data);
		return ;
	}
	curr = *begin;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = ft_create_elem(data);
}
