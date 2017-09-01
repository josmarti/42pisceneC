/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:46:46 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/23 20:37:35 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*curr;
	int		i;

	if (ac < 2)
		return (NULL);
	i = 1;
	list = NULL;
	while (i < ac)
	{
		curr = ft_create_elem(av[i]);
		curr->next = list;
		list = curr;
		i++;
	}
	return (curr);
}
