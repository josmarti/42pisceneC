/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 12:48:13 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/21 22:01:05 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *results;
	int i;

	results = (int*)malloc(sizeof(results) * (length));
	i = 0;
	while (i < length)
	{
		results[i] = f(tab[i]);
		i++;
	}
	return (results);
}
