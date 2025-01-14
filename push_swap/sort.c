/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:20:20 by yohatana          #+#    #+#             */
/*   Updated: 2024/12/23 16:57:29 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_stack *stack)
{
	int	max;
	int	max_bits;

	max_bits = 0;
	max = get_max(stack);
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

t_stack	*compress(t_stack *stack_a)
{
	int	*stack_comp;
	int	i;
	int	j;

	i = 0;
	stack_comp = (int *)malloc(sizeof(int) * stack_a->len);
	if (!stack_comp)
		return (NULL);
	stack_comp = bubble_sort(stack_a, stack_comp);
	while (i < stack_a->len)
	{
		j = 0;
		while (j < stack_a->len)
		{
			if (stack_comp[j] == stack_a->stack[i])
				break ;
			else
				j++;
		}
		stack_a->stack[i] = j;
		i++;
	}
	free (stack_comp);
	return (stack_a);
}

int	*bubble_sort(t_stack *a, int *stack_comp)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = a->len - 1;
	stack_copy(a, stack_comp);
	while (i < a->len)
	{
		while (j > i)
		{
			if (stack_comp[j - 1] > stack_comp[j])
			{
				temp = stack_comp[j];
				stack_comp[j] = stack_comp[j - 1];
				stack_comp[j - 1] = temp;
			}
			j--;
		}
		j = a->len - 1;
		i++;
	}
	return (stack_comp);
}

void	stack_copy(t_stack *a, int *stack_comp)
{
	int	i;

	i = 0;
	while (i < a->len)
	{
		stack_comp[i] = a->stack[i];
		i++;
	}
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int		max_bits;
	int		i;
	int		j;
	long	num;
	int		len;

	max_bits = get_max_bits(a);
	i = 0;
	while (i < max_bits && sort_check(a) == 1)
	{
		j = 0;
		len = a->len;
		while (j++ < len)
		{
			num = a->stack[0];
			if (num & (1 << i))
				ra(a);
			else
				pb(a, b);
		}
		while (b->len)
			pa(a, b);
		i++;
	}
}
