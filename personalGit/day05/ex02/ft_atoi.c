/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:12:16 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/16 16:20:29 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int number;
	int sign;

	sign = 1;
	number = 0;
	while (*str)
	{
		if ((*str >= '0') && (*str <= '9'))
		{
			number = (number * 10) + (*str - '0');
		}
		else if (*str == '-')
		{
			sign = -1;
		}
		else if ((*str > '9') || (*str < '0'))
		{
			if ((number != 0) && ((*str != ' ') && (*str != '\t')))
			{
				return (number * sign);
			}
		}
		str++;
	}
	return (number * sign);
}
