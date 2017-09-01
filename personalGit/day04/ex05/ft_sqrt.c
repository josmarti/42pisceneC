/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:07:28 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/12 23:31:56 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int length;
	int holder;

	holder = nb;
	length = 0;
	i = 0;
	while (holder > 0)
	{
		holder /= 10;
		length++;
	}
	while (i < nb / (2 * length))
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
