/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 16:17:18 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/27 23:34:59 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "srcs/ft_list.h"
int		evaluate(int num1, int num2, char op);
int		is_number(int num, t_list **value);
int		is_left_paren(char c, t_list **operator);
int		is_right_paren(char c, t_list **operator, t_list **value);
int		is_operator(char *str, t_list **operator, t_list **value);
int		ft_atoi(char *str);

/*2. While the operator stack is not empty,
	1 Pop the operator from the operator stack.
	2 Pop the value stack twice, getting two operands.
	3 Apply the operator to the operands, in the correct order.
	4 Push the result onto the value stack.
3. At this point the operator stack should be empty, and the value stack 
	should have only one value in it, which is the final result.*/

int		eval_expr(char *str)
{
	t_list *value;
	t_list *operator;
	int i;
	int num1;
	int num2;
	char *op;
	char *holder;

	i = 0;
	while (str[i])
	{
		if ((str[i] == ' ') || (str[i] == '\t'))
			i++;
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			num1 = ft_atoi(&str[i]);
			is_number(num1, &value);
		}
		else if (str[i] == '(')
			is_left_paren(str[i], &operator);
		else if (str[i] == ')')
			is_right_paren(str[i], &operator, &value);
		else
			is_operator(&str[i], &operator, &value);
		i++;
	}
	while (operator->next != NULL)
	{
		holder = ft_list_pop_front(&value);
		num1 = ft_atoi(holder);
		holder = ft_list_pop_front(&value);
		num2 = ft_atoi(holder);
		op = ft_list_pop_front(&operator);
		num1 = evaluate(num1, num2, *op);
		ft_list_push_front(&value, &num1);
	}
	holder = (ft_list_pop_front(&value));
	num1 = ft_atoi(holder);
	return num1;
}

int		greater_prec(char op1, char op2)
{
	if ((op1 == '/') || (op1 == '%') || (op1 == '*'))
	{
		if ((op2 == '/') || (op2 == '%') || (op2 == '*'))
			return (-1);
		else 
			return (1);
	}
	if ((op2 == '/') || (op2 == '%') || (op2 == '*'))
	{
		return (-1);
	}
	return (2);
}

