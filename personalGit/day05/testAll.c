/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testAll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:25:56 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/27 14:14:32 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_putchar.c"
#include "ex00/ft_putstr.c"
#include "ex01/ft_putnbr.c"
#include "ex02/ft_atoi.c"
#include "ex03/ft_strcpy.c"
#include "ex04/ft_strncpy.c"
#include "ex05/ft_strstr.c"
#include "ex06/ft_strcmp.c"
#include "ex07/ft_strncmp.c"
#include "ex08/ft_strupcase.c"
#include "ex09/ft_strlowcase.c"
#include "ex10/ft_strcapitalize.c"
#include "ex11/ft_str_is_alpha.c"
#include "ex12/ft_str_is_numeric.c"
#include "ex13/ft_str_is_lowercase.c"
#include "ex14/ft_str_is_uppercase.c"
#include "ex15/ft_str_is_printable.c"
#include "ex16/ft_strcat.c"
#include "ex17/ft_strncat.c"
#include "ex18/ft_strlcat.c"
#include "ex19/ft_strlcpy.c"
#include "ex20/ft_putnbr_base.c"
void test00(void)
{
	char *c;

	c = "Print String Works";
	ft_putstr(c);
}
void test01(void)
{
	int i;

	i = -2147483648;
	ft_putnbr(i);
}
void test02(void)
{
	char *c;
	int i;

	i = 0;
	c = "-Wrong734hksdjkfsdk55";
	i = ft_atoi(c);
	ft_putnbr(i);
}
void test03()
{
	char *a;
	char b[] = "Holder!";

	a = "Correct";
	ft_strcpy(b, a);
	ft_putstr(b);
}
void test04()
{
	char a[6];
	ft_strncpy(a, "qwerty", 4);
	ft_strncpy(a, "zasd", 1);
	ft_putstr(a);
}
void test05()
{
	char *big = "RobertCCCCarlFrancalangiA";
	char *target = "Carl";
	char *result;

	result = ft_strstr(big, target);	
	ft_putstr(result);
}
void test06()
{
	int diff; 

	diff = 0;
	char *s1 = "0000000000";
	char *s2 = "00002000000";
	diff = ft_strcmp(s1, s2);
	ft_putnbr(diff);
}
void test07()
{
	int diff;

	diff = 69;
	char *s1 = "00000000500";
	char *s2 = "0000000000";
	diff = ft_strncmp(s1, s2, 1); 
	ft_putnbr(diff);
}
void test08()
{
	char c[] = "Robert Carl Francalangia 89655 !!#$";
	ft_strupcase(c);
	ft_putstr(c);
	ft_strlowcase(c);
	ft_putchar('\n');
	ft_putstr(c);
	ft_strcapitalize(c);
	ft_putchar('\n');
	ft_putstr(c);
    ft_strupcase(c);
	ft_putchar('\n');
	ft_putstr(c);
	ft_strcapitalize(c);
	ft_putchar('\n');
	ft_putstr(c);
}
void test11()
{
	char c[] = "RobertCarlFrancalangia";
	char b[] = "Robert Carl Francalangia";
	char d[] = "";
	ft_putnbr(ft_str_is_alpha(c));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_alpha(b));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_alpha(d));
}
void test12()
{
	printf("Testing Numeric\n");
	char c[] = "8608199317";
	char b[] = "860-819-9317";
	char d[] = "";
	ft_putstr(c);
	ft_putchar('\n');
	ft_putnbr(ft_str_is_numeric(c));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_numeric(b));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_numeric(d));
}
void test13()
{
	char c[] = "robertcarlfrancalangia";
	char b[] = "robertCarlFrancalangia";
	char d[] = "";
	ft_putstr(c);
    ft_putchar('\n');
    ft_putnbr(ft_str_is_lowercase(c));
    ft_putchar('\n');
    ft_putnbr(ft_str_is_lowercase(b));
    ft_putchar('\n');
    ft_putnbr(ft_str_is_lowercase(d));
}

void test14()
{
	char c[] = "ROBERTCARLFRANCALANGIA";
	char b[] = "ROBERTcARLfRANCALANGIA";
	char d[] = "";
	ft_putstr(c);
	ft_putchar('\n');
	ft_putnbr(ft_str_is_uppercase(c));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_uppercase(b));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_uppercase(d));
}
void test15()
{
	char c[] = "ROBERTCARLFRANCALANGIA";
	char b[] = {25, 20, 65, 4};
	char d[] = "";
	ft_putstr(c);
	ft_putchar('\n');
	ft_putnbr(ft_str_is_printable(c));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_printable(b));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_printable(d));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_printable("\x7f"));
}
void test16()
{
	char dest[18] = "";
	char first[] = "Robert";
	char middle[] = "Carl";
	char last[] = "Francalangia";

	ft_strcat(dest, first);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_strcat(dest, middle);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_strcat(dest, last);
	ft_putstr(dest);
}
void test17()
{
	char dest[18] = "";
	char first[] = "RobertJunk";
	char middle[] = "CarlJunk";
	char last[] = "FrancalangiaJunk";

	ft_strncat(dest, first, 3);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_strncat(dest, middle, 4);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_strncat(dest, last, 12);
	ft_putstr(dest);
}
void test18()
{
	int i = 0;
	char dest[18] = "";
	char first[] = "RobertJunk";
	char middle[] = "CarlJunk";
	char last[] = "FrancalangiaJunk";

	i = ft_strlcat(dest, first, 3);
	ft_putstr(dest);
	ft_putnbr(i);
	ft_putchar('\n');
	i = ft_strlcat(dest, middle, 4);
	ft_putstr(dest);
	ft_putnbr(i);
	ft_putchar('\n');
	i = ft_strlcat(dest, last, 12);
	ft_putstr(dest);
	ft_putnbr(i);	
}
void test19()
{
	char dest[18] = "-----------------";
	char first[] = "RobertJunk";
	char middle[] = "CarlJunk";
	char last[] = "FrancalangiaJunk";

	ft_strlcpy(dest, first, 3);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_strlcpy(dest, middle, 4);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_strlcpy(dest, last, 12);
	ft_putstr(dest);
}
void test20()
{
	int i = 911;
	char *c = "0123456789ABCDEF";
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr_base(i, c);
	int j = -2147483648;
	char *d = "0123456789";
	//ft_putnbr(j);
	ft_putchar('\n');
	ft_putnbr_base(j, d);
}

int		main(void)
{
	test00();
	ft_putchar('\n');
	test01();
	ft_putchar('\n');
	test02();
	ft_putchar('\n');
	test03();
	ft_putchar('\n');
	test04();
	ft_putchar('\n');
	test05();
	ft_putchar('\n');
	test06();
	ft_putchar('\n');
	test07();
	ft_putchar('\n');
	test08();
	ft_putchar('\n');
	ft_putstr("Test 11\n");
	test11();
	ft_putchar('\n');
	ft_putstr("Test 12\n");
	test12();
	ft_putchar('\n');
	ft_putstr("Test 13\n");
	test13();
	ft_putchar('\n');
	ft_putstr("Test 14\n");
	test14();
	ft_putchar('\n');
	ft_putstr("Test 15\n");
	test15();
	ft_putchar('\n');
	ft_putstr("Test 16\n");
	test16();
	ft_putchar('\n');
	ft_putstr("Test 17\n");
	test17();
	ft_putchar('\n');
	ft_putstr("Test 18\n");
	test18();
	ft_putchar('\n');
	ft_putstr("Test 19\n");
	test19();
	ft_putchar('\n');
	ft_putstr("Test 20\n");
	test20();

}
