/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:29:28 by yohatana          #+#    #+#             */
/*   Updated: 2024/12/23 16:57:56 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"
# include "printf/libftprintf.h"

# define SUCCESS 0
# define ERROR 1
# define DEFAULT_LIMIT 1000

typedef struct s_stack
{
	int		*stack;
	int		len;
	int		max_index;
	int		min_index;
}		t_stack;

// init
t_stack	*create_stack_a(int argc, char **argv, t_stack *a, t_stack *b);
int		same_nbr_check(t_stack *stack_a);
int		sort_check(t_stack *stack);

// push_swap
int		sort_exec(t_stack *stack_a, t_stack *stack_b);
void	sort_3(t_stack *stack_a);
void	sort_4(t_stack *stack_a, t_stack *stack_b);
void	sort_5(t_stack *stack_a, t_stack *stack_b);
void	large_sort(t_stack *stack_a, t_stack *stack_b);

// push_swap_helper
void	min_top_move(t_stack *stack_a);

// get_num
int		get_max_index(t_stack *stack);
int		get_min_index(t_stack *stack);
int		get_max(t_stack *stack);
int		get_min(t_stack *stack);

// main
void	free_all(t_stack *stack);
int		validation_check(t_stack *stack_a);

// error
int		error(void);
int		error_stack(t_stack *stack);
int		error_doble_stack(t_stack *stack_a, t_stack *stack_b);

// ft_atoi_ps
long	ft_atoi_ps(const char *str);

//stack_move_a
int		sa(t_stack *stack_a);
int		pa(t_stack *stack_a, t_stack *stack_b);
int		ra(t_stack *stack_a);
int		rra(t_stack *stack_a);

//stack_move_b
int		sb(t_stack *stack_b);
int		pb(t_stack *stack_a, t_stack *stack_b);
int		rb(t_stack *stack_b);
int		rrb(t_stack *stack_b);

// command
void	rotate(t_stack *stack);
void	swap(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	push(t_stack *stack_1, t_stack *stack_2);

// sort
void	radix_sort(t_stack *a, t_stack *b);
t_stack	*compress(t_stack *stack_a);
int		*bubble_sort(t_stack *a, int *stack_comp);
int		*swap_bubble(int *stack_comp, int small, int big);
void	stack_copy(t_stack *a, int *stack_comp);

#endif
