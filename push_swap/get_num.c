/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:48:00 by yohatana          #+#    #+#             */
/*   Updated: 2024/11/03 21:05:31 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	get_max_index(t_stack *stack)
{
	int	max;
	int	i;
	int	index;

	max = stack->stack[0];
	i = 0;
	index = 0;
	while (i < stack->len)
	{
		if (max < stack->stack[i])
		{
			max = stack->stack[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	get_min_index(t_stack *stack)
{
	int	min;
	int	i;
	int	index;

	i = 0;
	index = 0;
	min = stack->stack[0];
	while (i < stack->len)
	{
		if (min > stack->stack[i])
		{
			min = stack->stack[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	get_max(t_stack *stack)
{
	int	max;
	int	i;

	max = stack->stack[0];
	i = 0;
	while (i < stack->len)
	{
		if (max < stack->stack[i])
		{
			max = stack->stack[i];
		}
		i++;
	}
	return (max);
}

int	get_min(t_stack *stack)
{
	int	min;
	int	i;

	i = 0;
	min = stack->stack[0];
	while (i < stack->len)
	{
		if (min > stack->stack[i])
		{
			min = stack->stack[i];
		}
		i++;
	}
	return (min);
}
