/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:45:44 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/24 08:26:42 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	return_check(const char *str, long long res, int sign, int i)
{
	long long	old_res;

	old_res = res;
	while (str[i] >= 48 && str[i] <= 57 && i < 19)
	{
		if (res >= old_res)
		{
			old_res = res;
			res = res * 10 + (str[i++] - 48);
		}
		else
		{
			if (sign < 0)
				return (2147483648);
			if (sign > 0)
				return (-2147483649);
		}
	}
	return (res * sign);
}

long	ps_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;

	sign = 1;
	i = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	return (return_check(str, res, sign, i));
}
