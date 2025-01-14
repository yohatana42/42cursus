/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_move_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:17:49 by yohatana          #+#    #+#             */
/*   Updated: 2024/11/03 21:06:02 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sb(t_stack *stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
	return (0);
}

int	pb(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
	return (0);
}

int	rb(t_stack *stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
	return (0);
}

int	rrb(t_stack *stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
	return (0);
}
