/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:28:20 by yohatana          #+#    #+#             */
/*   Updated: 2024/12/09 16:59:25 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (SUCCESS);
	else
	{
		stack_a = (t_stack *)ft_calloc(sizeof(t_stack), 1);
		if (!stack_a)
			error();
		stack_b = (t_stack *)ft_calloc(sizeof(t_stack), 1);
		if (!stack_b)
			error_stack(stack_a);
		create_stack_a(argc, argv, stack_a, stack_b);
		if (same_nbr_check(stack_a) == 1)
			error_doble_stack(stack_a, stack_b);
		if (sort_check(stack_a) == 1)
			sort_exec(stack_a, stack_b);
		free_all(stack_a);
		free_all(stack_b);
	}
	return (SUCCESS);
}

int	validation_check(t_stack *stack_a)
{
	if (same_nbr_check(stack_a) == 1)
		return (1);
	return (0);
}

void	free_all(t_stack *stack)
{
	if (stack != NULL)
	{
		if (stack->stack != NULL)
			free(stack->stack);
		free(stack);
	}
}
