/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 01:05:33 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/12 23:28:53 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
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
	return (nb *= ft_recursive_power(base, power - 1));
}
