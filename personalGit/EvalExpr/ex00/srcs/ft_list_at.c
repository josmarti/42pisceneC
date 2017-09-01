/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 21:26:24 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/27 21:36:24 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*curr;
	unsigned int	i;

	i = 0;
	curr = begin_list;
	while ((curr) && (i < nbr))
	{
		curr = curr->next;
		i++;
	}
	if ((curr == '\0') && (i < nbr))
		curr = NULL;
	return (curr);
}
