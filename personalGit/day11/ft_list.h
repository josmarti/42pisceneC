/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:30:55 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/22 13:45:00 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#ifndef ft_list_h
# define ft_list_h

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*add_list(t_list *list, char *str);
t_list	*ft_create_elem(void *data);
void	print_list(t_list *list);
int		ft_putchar(char c);
void	ft_putstr(char *str);

t_list *add_link(t_list *list, char *str)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	if (temp)
	{
		temp->data = str;
		temp->next = list;
	}
	return (temp);
}

void print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
			str++;
	}
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
		return (0);
}

# endif
