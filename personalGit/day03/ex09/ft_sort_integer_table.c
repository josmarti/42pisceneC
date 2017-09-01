/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 21:12:32 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/11 22:08:43 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int flag;
	int i;
	int *keeper;

	keeper = tab;
	i = 0;
	flag = 0;
	while (flag < size)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tab[i] = tab[i] + tab[i + 1];
				tab[i + 1] = tab[i] - tab[i + 1];
				tab[i] = tab[i] - tab[i + 1];
			}
			i++;
		}
		tab = keeper;
		i = 0;
		flag++;
	}
}
