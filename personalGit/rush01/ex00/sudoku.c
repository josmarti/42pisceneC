/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 14:37:24 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/20 17:49:10 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_row(char place, char **board, int row, int col)
{
	int index;

	index = 0;
	while (index < 9)
	{
		if ((board[row][index] == place) && (index != col))
			return (0);
		index++;
	}
	return (1);
}

int		check_column(char place, char **board, int row, int col)
{
	int index;

	index = 0;
	while (index < 9)
	{
		if ((board[index][col] == place) && (index != row))
			return (0);
		index++;
	}
	return (1);
}

int		check_quad(char place, char **board, int row, int col)
{
	int r_index;
	int c_index;
	int quadrow;
	int quadcol;

	quadrow = (row / 3) * 3;
	quadcol = (col / 3) * 3;
	r_index = 0;
	while (r_index < 3)
	{
		c_index = 0;
		while (c_index < 3)
		{
			if ((board[quadrow + r_index][quadcol + c_index] == place)
				&& ((r_index + quadrow != row) && (c_index + quadcol != col)))
				return (0);
			c_index++;
		}
		r_index++;
	}
	return (1);
}

int		selection(char **board, int row, int col, char place)
{
	if (check_quad(place, board, row, col) == 1)
		if (check_column(place, board, row, col) == 1)
			if (check_row(place, board, row, col) == 1)
				return (1);
	return (0);
}

int		check_numbers(char **board)
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (board[row][col] >= '1' && board[row][col] <= '9')
			{
				if (selection(board, row, col, board[row][col]) == 0)
					return (0);
			}
			if (board[row][col] != '.')
				if (board[row][col] < '1' || board[row][col] > '9')
					return (0);
			col++;
		}
		row++;
	}
	return (1);
}
