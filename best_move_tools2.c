/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_tools2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:52:49 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/23 12:58:57 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_best_move2(t_list **stack_a, t_list **stack_b, t_track11 *var)
{
	while (var->rra > 0 || var->rrb > 0)
	{
		if (var->rra > 0 && var->rrb > 0)
		{
			rrr(stack_a, stack_b, 0);
			var->rra--;
			var->rrb--;
		}
		else if (var->rra > 0)
		{
			rra(stack_a, 0);
			var->rra--;
		}
		else if (var->rrb > 0)
		{
			rrb(stack_b, 0);
			var->rrb--;
		}
		else
			break ;
	}
}

void	do_best_move(t_list **stack_a, t_list **stack_b, t_track11 *var)
{
	while (var->ra > 0 || var->rb > 0)
	{
		if (var->ra > 0 && var->rb > 0)
		{
			rr(stack_a, stack_b, 0);
			var->ra--;
			var->rb--;
		}
		else if (var->ra > 0)
		{
			ra(stack_a, 0);
			var->ra--;
		}
		else if (var -> rb > 0)
		{
			rb(stack_b, 0);
			var->rb--;
		}
		else
			break ;
	}
	do_best_move2(stack_a, stack_b, var);
	pa(stack_a, stack_b, 0);
}
