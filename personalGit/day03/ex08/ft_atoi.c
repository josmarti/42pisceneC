/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:25:59 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/11 21:23:39 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int number;
	int sign;
	int holder;
	int i;

	i = 0;
	sign = 1;
	while (*str)
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		if ((*str >= '0') && (*str <= '9'))
		{
			holder = *str;
			number = (number * 10) + (holder - 48);
			i++;
		}
		str++;
	}
	number *= sign;
	return (number);
}
