/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 11:05:23 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/10 19:40:22 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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

void	evaluatenbr(int first, int second)
{
	if (second <= first)
	{
		return ;
	}
	printnbr(first);
	ft_putchar(' ');
	printnbr(second);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int first;
	int second;

	first = 00;
	second = first + 1;
	while (first <= 98)
	{
		while (second <= 99)
		{
			evaluatenbr(first, second);
			second++;
		}
		first++;
		second = 0;
	}
	ft_putchar('\n');
}
