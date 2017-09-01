/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 19:23:25 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/17 20:34:13 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		valid_hour(int hour)
{
	if ((hour > 24) || (hour < 0))
		return (1);
	else
		return (0);
}

void	print(int *hours, char **meridiem)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %i.00 %s AND %i.00 %s\n",
			hours[0], meridiem[0], hours[1], meridiem[1]);
}

void	ft_takes_place(int hour)
{
	char	*meridiem[2];
	int		hours[2];
	int		i;

	if ((i = valid_hour(hour)) == 1)
		return ;
	hours[0] = hour;
	hours[1] = hour + 1;
	if (hours[0] == 24)
		hours[1] = 1;
	while (i < 2)
		meridiem[i++] = "A.M.";
	while (i >= 0)
	{
		if ((hours[i] >= 12) && (hours[i] < 24))
		{
			meridiem[i] = "P.M.";
			if (hours[i] > 12)
				hours[i] -= 12;
		}
		if (hours[i] == 24)
			hours[i] -= 12;
		i--;
	}
	print(hours, meridiem);
}
