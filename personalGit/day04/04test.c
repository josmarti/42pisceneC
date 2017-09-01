/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 23:52:23 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/27 14:12:48 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"


void test00(void)
{
	int i = 10;
	i = ft_iterative_factorial(i);
	printf("%i\n", i);
}
void test01(void)
{
	int i = 10;
	i = ft_recursive_factorial(i);
	printf("%i\n", i);
}
void test02(void)
{
	int base = 2;
	int power = 16;
	int result;

	result = ft_iterative_power(base, power);
	printf("%i\n", result);
}
void test03(void)
{
	int base = 2;
	int power = 16;
	int result;

	result = ft_recursive_power(base, power);
	printf("%i\n", result);
}
void test04(void)
{
	int i = 0;

	i = ft_fibonacci(0);
	printf("%i \n", i);
}
void test05(void)
{
	int i = 2147483647;
	i = ft_sqrt(i);
	printf("%i\n", i);
	i = 899940001;
	i = ft_sqrt(i);
	printf("%i\n", i);
}

int main(void)
{
	test00();
	test01();
	test02();
	test03();
	test04();
	test05();
}
