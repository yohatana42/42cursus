/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_move_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:17:49 by yohatana          #+#    #+#             */
/*   Updated: 2024/11/03 21:05:59 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack *stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
	return (0);
}

int	pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
	return (0);
}

int	ra(t_stack *stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
	return (0);
}

int	rra(t_stack *stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
	return (0);
}
