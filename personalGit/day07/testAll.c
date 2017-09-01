/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testAll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:35:24 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/27 14:15:12 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_putstr.c"
#include "ex00/ft_strdup.c"
//#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
//#include "ex03/ft_concat_params.c"
#include "ex04/ft_split_whitespaces.c"

void test00()
{
	char c[] = "Hello World";
	char *result;
	result = ft_strdup(c);
	printf("C's Value: %s\n", c);
	printf("C's address: %p\n", c);
	printf("Results's Value: %s\n", result);
	printf("Results's address: %p\n", result);
}
/*void test01()
{
	int *i;
	int n = 0; 
	int max = 50;
	int min = 5;
	i = ft_range(min, max);
	n = max - min;
	while (n--)
		printf("%d\n", i++);
}*/
void test02()
{
	int *i;
	int n = 0;
	int max = 10;
	int min = 5;
	i = NULL;
	n = ft_ultimate_range(&i, min, max); 
	while (n--)
		printf("%d\n", *i++);
}
/*void test03(int argc, char **argv)
{
	char *c;
	c = ft_concat_params(argc, argv);
	printf("C String: %s", c);
}*/
void test04()
{
	char c[] = "Robert Carl Francalgnaia says Hi";
	char **sentence; 

	sentence = ft_split_whitespaces(c);
	while (*sentence)
	{
		printf("%s\n", *sentence);
		sentence++;
	}
}

int main (/*int argc, char **argv*/)
{
	test00();
	//test01();
	test02();
	//test03(argc, argv);
	test04();
	printf("End\n");
}
