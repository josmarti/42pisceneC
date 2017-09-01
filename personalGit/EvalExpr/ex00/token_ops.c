/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 16:17:18 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/27 23:35:38 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/ft_list.h"
int		ft_atoi(char *str);
int		greater_prec(char op1, char op2);

int		evaluate(int num1, int num2, char op)
{
	if (op == '+')
		return (num1 + num2);
	else if (op == '-')
		return (num1 - num2);
	else if (op == '*')
		return (num1 * num2);
	else if (op == '%')
		return (num1 % num2);
	else
		return (num1 / num2);
}

/*1. While there are still tokens to be read in,
	1.1 Get the next token.
	1.2 If the token is:*/

//1.2.1 A number: push it onto the value stack.
int		is_number(int num, t_list **value)
{
	int i;

	i = 0;
	ft_list_push_front(value, &num);
	return (1);
}

//1.2.3 A left parenthesis: push it onto the operator stack.
int		is_left_paren(char c, t_list **operator)
{
	if (c == '(') 
	{
		ft_list_push_front(operator, &c);
		return (1);
	}
	return (0);
}

/*1.2.4 A right parenthesis:
	1 While the thing on top of the operator stack is not a left parenthesis,
		1 Pop the operator from the operator stack.
		2 Pop the value stack twice, getting two operands.
		3 Apply the operator to the operands, in the correct order.
		4 Push the result onto the value stack.
	2 Pop the left parenthesis from the operator stack, and discard it.*/
int		is_right_paren(char *str, t_list **operator, t_list **value)
{
	char *op;
	char num1;
	char num2;
	char *holder;
	int i;

	i = 0;
	if (str[i] == ')') 
	{
		op = ft_list_pop_front(operator);
		while (*op != '(')
		{
			holder = ft_list_pop_front(value);
			num1 = ft_atoi(holder);
			holder = ft_list_pop_front(value);
			num2 = ft_atoi(holder);
			num1 = evaluate(num1, num1, *op);
			ft_list_push_front(value, &num1);
		}
	}
	return (0);
}

/*1.2.5 An operator (call it thisOp):
	1 While the operator stack is not empty, and the top thing on the operator 
	stack has the same or greater precedence as thisOp,
		1 Pop the operator from the operator stack.
		2 Pop the value stack twice, getting two operands.
		3 Apply the operator to the operands, in the correct order.
		4 Push the result onto the value stack.
	2 Push thisOp onto the operator stack.*/

int		is_operator(char *str, t_list *operator, t_list **value)
{
	int precedent;
	char *op;
	int num1;
	int num2;
	char prev_op;
	char *holder;

	op = NULL;
	if ((str[0] == '-') || (str[0] == '+') || (str[0] == '/') || (str[0] == '%') || (str[0] == '*'))
	{	
		*op = str[0];
		while (operator->next != NULL)
		{
			prev_op = *(char *)(operator->data);
			precedent = greater_prec(str[0], prev_op);
			if (precedent == -1)
			{
				op = ft_list_pop_front(&operator);	
				holder = ft_list_pop_front(value);
				num1 = ft_atoi(holder);
				holder = ft_list_pop_front(value);
				num2 = ft_atoi(holder);
				num1 = evaluate(num1, num1, *op);
				ft_list_push_front(value, &num1);
			}
			else
			   break ;	
		}
		ft_list_push_front(&operator, op);
	}
	return (0);
}
