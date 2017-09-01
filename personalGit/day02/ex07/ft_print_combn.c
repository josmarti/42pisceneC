/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 08:44:21 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/10 20:41:30 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar('0' + (n % 10));
}

void	printnbr(int n)
{
	if (n < 10)
	{
		ft_putnbr(0);
	}
	ft_putnbr(n);
}

int		power(int base, int exponent)
{
	while (exponent > 1)
	{
		base = base * base;
		exponent--;
	}
	return (base);
}

void	ft_print_combn(int n)
{
	int total;
	int i;

	i = 0;
	total = power(10, n);
	while (i < total)
	{
		if (i % 10 > i / power(10, n-1))
		{
			if (i < 10)
			{
				ft_putnbr(0);
			}
			ft_putnbr(i);
			i++;
			ft_putchar(',');
			ft_putchar(' ');
		}
		else
		{
			i++;
		}
	}
}

int main()
{
	ft_print_combn(3);
}
