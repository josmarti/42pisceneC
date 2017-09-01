/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:11:45 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/10 23:52:40 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int sign;
	int remainder;

	remainder = 0;
	sign = 1;
	if (*b == 0)
	{
		return ;
	}
	if ((*b < 0) && (*a > 0))
	{
		*b *= -1;
		sign = -1;
	}
	else if ((*b > 0) && (*a < 0))
	{
		*a *= -1;
		sign = -1;
	}
	remainder = *a % *b;
	*a = *a / *b;
	*a = *a * sign;
	*b = remainder * -1;
}
