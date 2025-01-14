/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:28:51 by yohatana          #+#    #+#             */
/*   Updated: 2024/11/25 21:36:04 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_top_move(t_stack *stack_a)
{
	if ((stack_a->len / 2) > get_min_index(stack_a))
	{
		while (get_min_index(stack_a) != 0)
			ra(stack_a);
	}
	else
	{
		while (get_min_index(stack_a) != 0)
			rra(stack_a);
	}
}
