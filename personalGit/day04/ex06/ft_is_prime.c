/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 13:47:19 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/12 23:21:39 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int remain;
	int i;

	remain = nb % 10;
	if ((i = 2) && (nb == 2))
	{
		return (1);
	}
	if ((remain == 0) || (remain % 2 == 0) || (remain == 5))
	{
		return (0);
	}
	if (nb > 100000000)
	{
		i = 100;
	}
	while (remain < nb / i)
	{
		if (nb % remain == 0)
		{
			return (0);
		}
		remain++;
	}
	return (1);
}
