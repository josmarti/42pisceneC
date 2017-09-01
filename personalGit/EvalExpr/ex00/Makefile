# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 11:38:42 by rfrancal          #+#    #+#              #
#    Updated: 2017/08/27 23:31:48 by rfrancal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIST = srcs/*.c
FILES = main.c eval_expr.c ft_atoi.c ft_putnbr.c token_ops.c len.c $(LIST) 
INCLUDE = includes/
RUN = runEval

all: $(RUN)

$(RUN):
	gcc -Wall -Werror -Wextra -o $(RUN) $(FILES); 

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(RUN)

re:	fclean all

