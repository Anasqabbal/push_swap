/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:00:36 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/23 14:29:14 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complete_the_work(t_list **stack_a, t_list **stack_b, t_track11 *var)
{
	sort_3_args(stack_a);
	while (var->pb--)
		pa(stack_a, stack_b, 0);
	return ;
}

static void	sort_5_a(t_list **stack_a, t_list **stack_b, t_track11 *var)
{
	if (ft_lstsize(*stack_a) == 3)
		complete_the_work(stack_a, stack_b, var);
	else if (!find_the(*stack_a, 0, ft_lstsize(*stack_a)))
	{
		pb(stack_b, stack_a, 0);
		var->pb++;
		sort_5_a(stack_a, stack_b, var);
	}
	else if (find_the(*stack_a, 0,
			ft_lstsize(*stack_a)) == (ft_lstsize(*stack_a) - 1))
	{
		rra(stack_a, 0);
		pb(stack_b, stack_a, 0);
		var->pb++;
		sort_5_a(stack_a, stack_b, var);
	}
	else
	{
		while (find_the(*stack_a, 0, ft_lstsize(*stack_a)))
			ra(stack_a, 0);
		pb(stack_b, stack_a, 0);
		var->pb++;
		sort_5_a(stack_a, stack_b, var);
	}
}

void	sort_5_args(t_list **stack_a, t_list **stack_b)
{
	t_track11	var;

	var.pa = 0;
	var.pb = 0;
	sort_5_a(stack_a, stack_b, &var);
}
