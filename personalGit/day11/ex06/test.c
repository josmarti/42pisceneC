/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:54:25 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/23 12:57:21 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_list.h"

int main(void)
{
	t_list *list;
	char *str = "First\n";
	char *one = "one\n";
	char *two = "two\n";
	char *three = "three\n";
	//char *second2last = "Second to Last\n";
	//char *last = "Last\n";
	list = NULL;

	
	list = ft_create_elem(str);
	list->next = ft_create_elem(one);
	list->next->next = ft_create_elem(two);
	list->next->next->next = ft_create_elem(three);
	//ft_list_push_front(&list, second2last);
	//ft_list_push_front(&list, last);
	print_list(list);
	list = ft_list_clear(&list);
	printf("Does it work?\n");
	print_list(list);
}
