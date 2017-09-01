/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 01:17:06 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/17 20:43:58 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*range(int *range, int min, int max)
{
	int i;
	int value;
	int *temp;

	temp = range;
	i = 0;
	value = min;
	while (value < max)
	{
		*temp = value;
		value++;
		temp++;
	}
	return (range);
}

int		*ft_range(int min, int max)
{
	int len;
	int *str;

	if (min >= max)
		return (str = NULL);
	len = max - min;
	str = (int*)malloc(sizeof(*str) * (len));
	str = range(str, min, max);
	return (str);
}
