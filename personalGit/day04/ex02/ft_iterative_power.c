/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 00:52:59 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/12 23:27:50 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int base;

	i = 0;
	base = nb;
	if ((nb < 0) || (power < 0))
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power - 1)
	{
		nb *= base;
		i++;
	}
	return (nb);
}
