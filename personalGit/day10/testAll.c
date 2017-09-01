/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testAll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:59:38 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/21 21:33:45 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ex01/ft_foreach.c"
#include "ex02/ft_map.c"

int	ft_oneUp(int i)
{
	return(i++);
}

void	test01()
{
	int *i;
	int count;
	void (*f)(int);
	
	count = 0;
	f = &ft_putnbr;
	i = (int*)malloc(sizeof(i) * (10));
	while (count < 10)
	{
		i[count] = count;
		count++;
	}
	ft_foreach(i, 10, f);

}
void	test02()
{
	int *i;
	int *results;
	int count;
	int (*f)(int);
	void (*p)(int);
	
	count = 0;
	p = &ft_putnbr;
	f = &ft_oneUp;
	i = (int*)malloc(sizeof(i) * (10));
	results = (int*)malloc(sizeof(results) * (10));
	while (count < 10)
	{
		i[count] = 0;
		count++;
	}
	results = ft_map(i, 10, f); 
	ft_foreach(results, 10, p);
}
int	main(void)
{
	test01();
	test02();
}

