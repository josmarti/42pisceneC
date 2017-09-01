/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 21:30:17 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/12 23:17:16 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		iterate_up(int i)
{
	i++;
	if ((i % 10 == 0) || (i % 10 == 5))
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i++;
	}
	return (i);
}

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

int		ft_find_next_prime(int nb)
{
	int i;

	i = ft_is_prime(nb + 1);
	while (i == 0)
	{
		nb = iterate_up(nb);
		i = ft_is_prime(nb);
	}
	return (nb);
}
