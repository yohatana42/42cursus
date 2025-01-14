/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:52:16 by yohatana          #+#    #+#             */
/*   Updated: 2024/12/09 16:57:45 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// stack_1[0] -> stack_2[0]
void	push(t_stack *stack_1, t_stack *stack_2)
{
	int	stack_1_nbr;
	int	i;
	int	j;

	i = 0;
	j = stack_2->len;
	stack_1_nbr = stack_1->stack[0];
	while (i < stack_1->len - 1)
	{
		stack_1->stack[i] = stack_1->stack[i + 1];
		i++;
	}
	stack_1->len--;
	while (0 < j)
	{
		stack_2->stack[j] = stack_2->stack[j - 1];
		j--;
	}
	stack_2->stack[0] = stack_1_nbr;
	stack_2->len++;
}

void	rotate(t_stack *stack)
{
	int	top;
	int	i;

	i = 0;
	top = stack->stack[0];
	while (i < stack->len - 1)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->stack[stack->len - 1] = top;
}

void	reverse_rotate(t_stack *stack)
{
	int	last;
	int	i;

	i = stack->len - 1;
	last = stack->stack[i];
	while (0 < i)
	{
		stack->stack[i] = stack->stack[i - 1];
		i--;
	}
	stack->stack[0] = last;
}

// top, second swap
void	swap(t_stack *stack)
{
	int	top;
	int	second;

	top = stack->stack[0];
	second = stack->stack[1];
	stack->stack[0] = second;
	stack->stack[1] = top;
}
