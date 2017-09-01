/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 19:07:39 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/14 11:26:42 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int	find_offset(int size)
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
		count++;
		index = 5; 
		while (index < size)
		{
			if (index % 2 == 1)
				count += count; 
		index++; 
		}
	return ((offset * offset) - count);
}

// void	ss(int size)
// {


// }

int main(void)
{
	int i; 

	i = 0;
	i = find_offset(1);
	printf("print 1: %i\n", i);
	i = find_offset(2);
	printf("print 2:%i\n", i);
	i = find_offset(3);
	printf("print 3:%i\n", i);
	i = find_offset(4);
	printf("print 4:%i\n", i);
	i = find_offset(5);
	printf("print 5: %i\n", i);
	i = find_offset(6);
	printf("%i\n", i);
	i = find_offset(7);
	printf("%i\n", i);
	i = find_offset(8);
	printf("%i\n", i);
	i = find_offset(9);
	printf("%i\n", i);
	i = find_offset(10);
	printf("%i\n", i);
	i = find_offset(11);
	printf("%i\n", i);
	i = find_offset(12);
	printf("%i\n", i);
}
