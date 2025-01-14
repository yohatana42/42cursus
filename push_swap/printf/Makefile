# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 15:18:57 by yohatana          #+#    #+#              #
#    Updated: 2024/12/23 16:59:41 by yohatana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# name
NAME		= libftprintf.a

# src files
SRCS		=\
				ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunbr.c\
				ft_puthex.c ft_putpoint.c

# object file name
OBJS		= $(SRCS:.c=.o)

# compile flag
CC			= cc
CCFLAGS		= -Wall -Wextra -Werror

# Archive and remove command
AR			= ar rcs
RM			= rm -f

.DEFAULT_GOAL	:all

%.o: %.c
		$(CC) $(CCFLAGS) -c $< -o $@

all:		$(NAME)

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
			${RM} $(OBJS)

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
