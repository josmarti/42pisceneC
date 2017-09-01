/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:25:23 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/13 14:02:36 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_selection(int x, int y, int r, int c)
{
	if ((r == 0) && ((c == 0) || (c == x - 1)))
	{
		ft_putchar('A');
	}
	else if ((r == y - 1) && ((c == 0) || (c == x - 1)))
	{
		ft_putchar('C');
	}
	else if ((r + c == c) || (c + r == r) || (c == x - 1) || (r == y - 1))
	{
		ft_putchar('B');
	}
	else
		ft_putchar(' ');
	return ;
}

void	rush02(int x, int y)
{
	int col;
	int row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			print_selection(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
	return ;
}
