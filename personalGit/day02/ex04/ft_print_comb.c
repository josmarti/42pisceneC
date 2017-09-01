/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 11:05:23 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/10 19:39:24 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int hundreds, int tens, int ones)
{
	ft_putchar('0' + hundreds);
	ft_putchar('0' + tens);
	ft_putchar('0' + ones);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int hundreds;
	int tens;
	int ones;

	hundreds = 0;
	while ((hundreds <= 7) && (tens = hundreds + 1))
	{
		ones = tens + 1;
		while ((tens <= 8) && (ones = tens + 1))
		{
			while (ones <= 9)
			{
				if ((ones != tens) && (tens != hundreds) && (ones != hundreds))
				{
					ft_putnbr(hundreds, tens, ones);
				}
				ones = ones + 1;
			}
			tens = tens + 1;
			ones = 0;
		}
		hundreds = hundreds + 1;
		tens = 0;
	}
	ft_putchar('\n');
}
