/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:54:25 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/23 20:37:21 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_list.h"

int main(int argc, char **argv)
{
	t_list *list;
	/*char *str = "First\n";
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
	//ft_list_push_front(&list, last);*/
	list = ft_list_push_params(argc, argv);
	print_list(list);
}
