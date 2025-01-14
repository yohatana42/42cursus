/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:04:27 by yohatana          #+#    #+#             */
/*   Updated: 2024/12/14 20:19:51 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	error(void)
{
	write(2, "Error\n", 6);
	exit(ERROR);
}

int	error_stack(t_stack *stack)
{
	free_all(stack);
	write(2, "Error\n", 6);
	exit(ERROR);
}

int	error_doble_stack(t_stack *stack_a, t_stack *stack_b)
{
	free_all(stack_a);
	free_all(stack_b);
	write(2, "Error\n", 6);
	exit(ERROR);
}
