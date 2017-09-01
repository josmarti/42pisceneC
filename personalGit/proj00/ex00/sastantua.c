/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 11:10:54 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/14 11:26:11 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		find_offset(int size)
{
	int	offset;
	int count;
	int index;

	count = 0;
	if ((offset = 3) && (size == 1))
		return (offset);
	while (size >= offset)
	{
		offset++;
	}
	if ((size > 1) && (size < 5))
	{
		return (offset * offset);
	}
	else
	{
		count++;
		index = 5;
		while (index < size)
		{
			if (index % 2 == 1)
			{
				count += count;
			}
			index++;
		}
	}
	return ((offset * offset) - count);
}

int		stars(int size, int row, int prev, int flag)
{
	if ((row == 0) && (size == 0))
	{
		return (1);
	}
	else if (size == 0)
	{
		return (row * 2 + 1);
	}
	else if (size == 1)
	{
		return ((row * 2 + 1) + 10);
	}
	else if (flag == 0)
		return (prev + (((size / 2) + 2) * 2));
	else
		return (prev + 2);
}

void	sastantua(int size)
{
	int row;
	int col;
	int magnitude;
	int spaces;
	int i;
	int star;
	int prev;
	int flag;

	spaces = find_offset(size);
	magnitude = 0;
	row = 0;
	star = 0;
	while (magnitude < size)
	{
		flag = 0;
		row = 0;
		while (row < (magnitude + 3))
		{
			col = 0;
			i = 0;
			prev = star;
			star = stars(magnitude, row, prev, flag);
			flag = 1;
			while (i < (spaces - ((star - 1) / 2)))
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('/');
			while (col < star)
			{
				ft_putchar('*');
				col++;
			}
			ft_putchar('\\');
			ft_putchar('\n');
			row++;
		}
		magnitude++;
	}
}

int main(void)
{
	sastantua(5);
}
