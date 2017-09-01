# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 11:38:42 by rfrancal          #+#    #+#              #
#    Updated: 2017/08/21 17:29:13 by rfrancal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c 

LIB = libft.a

INCLUDE = includes/

all: $(LIB)

$(LIB):
	gcc -c $(SRC); 
	ar rc $(LIB) *.o;
	ranlib $(LIB);

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(LIB)

re:	fclean all

