/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:19:43 by yohatana          #+#    #+#             */
/*   Updated: 2024/12/23 17:08:09 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	check_overflow(unsigned long result, unsigned int d, int minus_flg);
static int	skip_space(char c);

long	ft_atoi_ps(const char *str)
{
	unsigned long	result;
	int				minus_flg;

	while (skip_space(*str))
		str++;
	result = 0;
	minus_flg = 1;
	if ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			minus_flg = -1;
		str++;
	}
	if (ft_isdigit(*str) == 0)
		return (LONG_MAX);
	while (*str != '\0')
	{
		if (ft_isdigit(*str) == 0)
			return (LONG_MAX);
		if (check_overflow(result, *str - '0', minus_flg) == 1)
			return (LONG_MAX);
		result = (result * 10) + (*str - '0');
		str++;
	}
	return ((long)result * minus_flg);
}

static int	skip_space(char c)
{
	if (c == '\t' || c == '\v' || c == '\f'
		|| c == '\r' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

// return (1) overflow
static int	check_overflow(unsigned long result, unsigned int d, int minus_flg)
{
	unsigned long	end_dig;
	unsigned long	max;

	if (minus_flg == -1)
	{
		end_dig = (LONG_MIN % 10) * -1;
		max = (LONG_MIN / 10) * -1;
	}
	else
	{
		end_dig = LONG_MAX % 10;
		max = LONG_MAX / 10;
	}
	if (max < result || (result == max && d > end_dig))
		return (1);
	return (0);
}
