/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testAll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 19:53:01 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/27 14:13:12 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
// #include "ex06/ft_strlen.c"
#include "ex07/ft_strrev.c"
#include "ex08/ft_atoi.c"
#include "ex09/ft_sort_integer_table.c"


int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar('0' + (n % 10));
}
void	test_ex00(void)
{
	printf("ex00\n");
	printf("Testing ft_ft.c\n");
	int *nbr;
	int a;

	a = 69;
	nbr = &a;
	ft_ft(nbr);
	ft_putnbr(*nbr);
}
void	test_ex01(void)
{
	printf("ex01\n");
	printf("Testing ft_ultimate_ft.c\n");
	int *ptr0;
	int **ptr1;
	int ***ptr2;
	int ****ptr3;
	int *****ptr4;
	int ******ptr5;
	int *******ptr6;
	int ********ptr7;
	int *********ptr8;

	int a = 0;
	ptr0 = &a;
	ptr1 = &ptr0;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_ultimate_ft(ptr8);
	ft_putnbr(*********ptr8);
}
void	test_ex02(void)
{
	printf("ex02\n");
	printf("Testing ft_swap.c\n");
	int *a;
	int *b;
	int c;
	int d;

	c = 7;
	a = &c;
	d = 12;
	b = &d;
	ft_putchar('A');
	ft_putnbr(*a);
	ft_putchar('B');
	ft_putnbr(*b);
	ft_swap(a, b);
	ft_putchar('\n');
	ft_putchar('A');
	ft_putnbr(*a);
	ft_putchar('B');
	ft_putnbr(*b);
}
void	test_ex03(void)
{
	printf("ex03\n");
	printf("Testing ft_div_mod.c\n");
	int div;
	int mod;
	int a;
	int b;

	div = 0;
	mod = 0;
	a = -73;
	b = -10;
	ft_putchar('A');
	ft_putnbr(a);
	ft_putchar('B');
	ft_putnbr(b);
	ft_div_mod(a, b, &div, &mod);
	ft_putchar('\n');
	ft_putchar('D');
	ft_putnbr(div);
	ft_putchar('M');
	ft_putnbr(mod);
}
void	test_ex04(void)
{
	printf("ex04\n");
	printf("Testing ft_ultimate_div_mod.c\n");
	int a;
	int b;

	a = 46;
	b = 10;
	ft_putchar('A');
	ft_putnbr(a);
	ft_putchar('B');
	ft_putnbr(b);
	ft_ultimate_div_mod(&a, &b);
	ft_putchar('\n');
	ft_putchar('D');
	ft_putnbr(a);
	ft_putchar('M');
	ft_putnbr(b);
}
void	test_ex05(void)
{
	printf("ex05\n");
	printf("Testing ft_putstr.c\n");
	char *str1;
	char *str2;

	str1 = "it ";
	str2 = "Worked\n";
	ft_putstr(str1);
	ft_putstr(str2);
}
// void	test_ex06(void)
// {
// 	printf("ex06\n");
// 	printf("Testing ft_strlen.c\n");
// 	char *str1;
// 	int count;

// 	count = 0;
// 	str1 = "Correct";
// 	count = ft_strlen(str1);
// 	if (count == 7)
// 		printf("Correct! It Works!\n");
// 	else 
// 		printf("Wrong, it does not work\n");
// 	printf("%i\n", count);
// }

void	test_ex07(void)
//To test this test_ex06 needs to be commented out
//both in the function declarations and the main 
{
	printf("ex07\n");
	printf("Testing ft_strrev.c\n");

	char str1[] = "123456789";
	char *str2;


	printf("%s\n", str1);
	str2 = ft_strrev(str1);
	printf("%s\n", str2);
	printf("%s\n", str1);
}

void	test_ex08(void)
{
	printf("ex08\n");
	printf("Testing ft_atoi.c\n");
	char c[] = "3";
	char d[] = "987rsfdfv";
	char e[] = "----54";
	int ci = 42;
	int di = 69; 
	int ei = -300;


	printf("%s, %s, %s\n", c, d, e);
	ci = ft_atoi(c);
	printf("c is done, %i\n", ci);
	di = ft_atoi(d);
	printf("d is done, %i\n", di);
	ei = ft_atoi(e);
	printf("%i,\n", ei);
}

void	test_ex09(void)
{
	printf("ex09\n");
	printf("Testing ft_sort_integer_table.c\n");
	int str[] = {1,18,2,9,8,7,6,5,4};
	int size = 9;
	int i;

	i = 0;
	while (i < 9)
	{
		printf("%i,", str[i]);
		i++;
	}
	ft_sort_integer_table(str, size);
	printf("\nyou made it back to the test function\n");
	i = 0;
	while (i < 9)
	{
		printf("%i,", str[i]);
		//printf("you are in the final print\n");
		i++;
	}
}

int main(void)
{
	test_ex00();
	ft_putchar('\n');
	test_ex01();
	ft_putchar('\n');
	test_ex02();
	ft_putchar('\n');
	test_ex03();
	ft_putchar('\n');
	test_ex04();
	ft_putchar('\n');
	test_ex05();
	// test_ex06();	
	test_ex07();
	test_ex08();
	test_ex09();

}
