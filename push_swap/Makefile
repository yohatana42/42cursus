# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 15:16:27 by yohatana          #+#    #+#              #
#    Updated: 2024/12/23 16:59:27 by yohatana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# name
NAME		= push_swap

# src files
SRCS		=\
				main.c\
				init.c\
				push_swap.c\
				command.c\
				ft_atoi_ps.c\
				stack_move_a.c\
				stack_move_b.c\
				sort.c\
				get_num.c\
				error.c\
				push_swap_helper.c

# object file name
OBJS		= $(SRCS:.c=.o)

# compile flag
CC			= cc
CCFLAGS		= -Wall -Wextra -Werror

# Archive and remove command
AR			= ar rcs
RM			= rm -f

.DEFAULT_GOAL	:all

all:		$(NAME)

%.o: %.c
		$(CC) $(CCFLAGS) -I$(LIBFT) -I$(PRINTF) -c $< -o $@

# libft
LIBFT = libft
$(LIBFT)/libft.a:
		make -C $(LIBFT)

# printf
PRINTF = printf
$(PRINTF)/libftprintf.a:
		make -C $(PRINTF)

${NAME}:	${OBJS}  $(PRINTF)/libftprintf.a $(LIBFT)/libft.a
			$(CC) ${OBJS} -L$(LIBFT) -lft -L$(PRINTF) -lftprintf -o $(NAME)

clean:
			make -C $(PRINTF) clean
			make -C $(LIBFT) clean
			${RM} $(OBJS)

fclean:		clean
			make -C $(LIBFT) fclean
			make -C $(PRINTF) fclean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
