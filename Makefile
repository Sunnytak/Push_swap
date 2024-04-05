# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stak <stak@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/04 12:10:01 by stak              #+#    #+#              #
#    Updated: 2024/04/05 17:41:49 by stak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= push_swap
CC					= cc -g
RM					= rm -f
CFLAGS				= -Wall -Werror -Wextra

SRC	=	ft_atoi.c \
		handle_errors.c \
		list_utils.c \
		push.c \
		reverse_rotate.c \
		rotate.c \
		sort_3.c \
		sort_a_to_b.c \
		sort_b_to_a.c \
		sort_stacks.c \
		split.c \
		stack_sort.c\
		stack_utils.c \
		swap.c
		

OBJ = ${SRC:.c=.o}

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJ} ${NAME}

fclean: clean
	${RM} ${NAME}

re: clean all

.PHONY: all clean fclean re