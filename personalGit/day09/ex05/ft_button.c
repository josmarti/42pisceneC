/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:51:37 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/18 15:52:36 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if (i < j)
	{
		if (i > k)
			return (i);
		else if (k > j)
			return (j);
		else
			return (k);
	}
	else if (j < k)
	{
		if (k < i)
			return (k);
		else if (i < k)
			return (i);
		else
			return (j);
	}
}
