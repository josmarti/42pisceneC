/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 17:14:13 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/20 17:45:46 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		selection(char **board, int row, int col, char place);
int		filled_space(char **board, int row, int col);
int		empty_space(char **board, int row, int col, char place);

int		play(char **board, int row, int col)
{
	char place;

	if (row == 9)
		return (1);
	if ((board[row][col] != '.') && (board[row][col] != '0'))
	{
		if (filled_space(board, row, col))
			return (1);
		return (0);
	}
	place = '1';
	while (place < ':')
	{
		if (selection(board, row, col, place))
		{
			if (empty_space(board, row, col, place))
				return (1);
		}
		place += 1;
	}
	return (0);
}

int		filled_space(char **board, int row, int col)
{
	if (col == 8)
	{
		if (play(board, row + 1, 0))
			return (1);
	}
	else
	{
		if (play(board, row, col + 1))
			return (1);
	}
	return (0);
}

int		empty_space(char **board, int row, int col, char place)
{
	board[row][col] = place;
	if (col == 8)
	{
		if (play(board, row + 1, 0))
			return (1);
	}
	else
	{
		if (play(board, row, col + 1))
			return (1);
	}
	board[row][col] = '0';
	return (0);
}
