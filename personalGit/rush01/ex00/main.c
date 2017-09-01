/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 14:31:22 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/20 17:53:42 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		play(char **board, int row, int col);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_printboard(char **board);
int		ft_strlen(char *str);
int		check_strlen(char **board);
int		check_row(char place, char **board, int row, int col);
int		check_column(char place, char **board, int row, int col);
int		check_quad(char place, char **board, int row, int col);
int		check_numbers(char **board);

int		main(int argc, char **argv)
{
	char	**board;
	int		i;

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	board = (char**)malloc(sizeof(**board) * 9);
	board = ++argv;
	if (check_strlen(board) == 0 || check_numbers(board) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	i = play(board, 0, 0);
	ft_printboard(board);
}
