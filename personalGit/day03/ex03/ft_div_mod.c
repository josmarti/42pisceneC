/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:40:56 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/10 22:42:26 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int sign;

	sign = 1;
	if (b == 0)
	{
		return ;
	}
	if ((b < 0) && (a > 0))
	{
		b *= -1;
		sign = -1;
	}
	else if ((b > 0) && (a < 0))
	{
		a *= -1;
		sign = -1;
	}
	*div = a / b;
	*div *= sign;
	*mod = a % b;
	*mod *= sign;
}