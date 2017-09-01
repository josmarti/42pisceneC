/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 00:03:04 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/12 23:23:17 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int holder;

	holder = 1;
	i = 0;
	if ((nb <= 0) || (nb > 19))
	{
		return (0);
	}
	while (i < nb)
	{
		holder *= (nb - i);
		i++;
	}
	return (holder);
}
