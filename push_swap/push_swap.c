/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:40:32 by yohatana          #+#    #+#             */
/*   Updated: 2024/12/23 16:56:26 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// return 1 is error
int	sort_exec(t_stack *stack_a, t_stack *stack_b)
{
	int			*stack;

	stack = (int *)ft_calloc(sizeof(int), DEFAULT_LIMIT);
	if (!stack)
		error_doble_stack(stack_a, stack_b);
	stack_b->stack = stack;
	stack_b->min_index = 0;
	stack_b->max_index = 0;
	if (stack_a->len == 2)
		sa(stack_a);
	else if (stack_a->len == 3)
		sort_3(stack_a);
	else if (stack_a->len == 4)
		sort_4(stack_a, stack_b);
	else if (stack_a->len == 5)
		sort_5(stack_a, stack_b);
	else
		large_sort(stack_a, stack_b);
	return (0);
}

void	sort_3(t_stack *stack_a)
{
	int	max;

	max = get_max(stack_a);
	if (max == stack_a->stack[0])
		ra(stack_a);
	else if (max == stack_a->stack[1])
		rra(stack_a);
	if (stack_a->stack[0] > stack_a->stack[1])
	{
		sa(stack_a);
	}
}

void	sort_4(t_stack *stack_a, t_stack *stack_b)
{
	min_top_move(stack_a);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_stack *stack_a, t_stack *stack_b)
{
	min_top_move(stack_a);
	pb(stack_a, stack_b);
	min_top_move(stack_a);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	large_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (compress(stack_a) == NULL)
	{
		error_doble_stack(stack_a, stack_b);
	}
	radix_sort(stack_a, stack_b);
}
