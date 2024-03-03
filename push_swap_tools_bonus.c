/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_tools_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:15:30 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/24 11:41:19 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	_check(t_list **stack_a, int len)
{
	t_list	*tmp;
	t_list	*cur;
	int		i;
	int		j;

	i = -1;
	tmp = *stack_a;
	cur = *stack_a;
	while (i++ < len)
	{
		tmp = *stack_a;
		j = -1;
		while (++j < i)
			tmp = tmp->next;
		cur = tmp;
		while (cur)
		{
			if (*(tmp)->content > *(cur)->content)
				return (i + 1);
			cur = cur->next;
		}
	}
	return (0);
}

int	*ps_alloc(long nb)
{
	int	*n;

	n = (int *)malloc(sizeof(int));
	if (!n)
		return (0);
	*n = nb;
	return (n);
}

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
