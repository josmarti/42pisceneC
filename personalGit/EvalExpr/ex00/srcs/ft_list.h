/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:30:55 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/28 16:50:05 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H

# define FT_LIST_H
# include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);
void				print_list(t_list *list);
void				ft_list_push_back(t_list **begin, void *data);
void				ft_list_push_front(t_list **begin, void *data);
int					ft_list_size(t_list *begin);
t_list				*ft_list_push_params(int ac, char **av);
void				ft_list_clear(t_list **begin_list);
t_list				*ft_list_at(t_list *begin_list, unsigned int nbr);
char				*ft_list_pop_front(t_list **begin);
void				print_list(t_list *list);

#endif
