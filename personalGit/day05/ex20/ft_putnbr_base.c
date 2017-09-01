/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:44:01 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 22:55:17 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		valid_base(char *base)
{
	char	*temp;
	char	*search;
	int		i;

	temp = base;
	i = 0;
	if ((*(base + 1) == '\0') || (*base == '-') || (*base == '+'))
		return (0);
	while (*temp)
	{
		search = temp + 1;
		while (*search)
		{
			if (*search == *temp)
				return (0);
			search++;
		}
		temp++;
	}
	return (1);
}

char	get_char(int n, char *base)
{
	int i;

	i = 0;
	while (i < n)
	{
		base++;
		i++;
	}
	return (*base);
}

void	ft_putnbr_base(int n, char *base)
{
	char	*temp;
	int		ibase;

	temp = base;
	ibase = 0;
	if (valid_base(base) == 0)
		return ;
	while (*temp)
	{
		ibase++;
		temp++;
	}
	if (n < 0)
	{
		ft_putchar('-');
		if ((n == -2147483648) && (ibase == 10))
		{
			ft_putchar('2');
			return (ft_putnbr_base(147483648, base));
		}
		n *= 1;
	}
	if (n >= ibase)
		ft_putnbr_base((n / ibase), base);
	ft_putchar(get_char(n % ibase, base));
}
