/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:46:46 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/22 13:58:33 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
int main(void)
{
	t_list *list;
	char *str = "First\n";
	list = NULL;

	list = ft_create_elem((char*)str);	
	print_list(list);
}
