/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testAll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 17:58:13 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/27 14:18:11 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_generic.c"
#include "ex01/ft_takes_place.c"
#include "ex05/ft_button.c"
#include <stdio.h>

int main(void)
{
	//ft_generic();
	/*ft_takes_place(12);
	ft_takes_place(24);
	ft_takes_place(20);
	ft_takes_place(18);
	ft_takes_place(8);
	ft_takes_place(11);
	ft_takes_place(23);*/
	int i = ft_button(4, 5, 9);
	printf("%i\n", i); 
	i = ft_button(5, 10, 9);
	printf("%i\n", i); 
	i = ft_button(7, 5, 9);
	printf("%i\n", i); 
	i = ft_button(4, 8, 9);
	printf("%i\n", i); 
	i = ft_button(4, 1, 0);
	printf("%i\n", i); 
	i = ft_button(9, 9, 9);
	printf("%i\n", i); 
}
