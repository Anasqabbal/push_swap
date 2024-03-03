/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:39:44 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/29 10:48:43 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	set_values(t_track11 *var1, int index, int len_a)
{
	if (index <= len_a / 2)
	{
		var1->rra = 0;
		var1->ra = index;
	}
	else
	{
		var1->ra = 0;
		var1->rra = len_a - index;
	}
}

static void	update_values(t_track11 *var, t_track11 *var1, int i, int len_b)
{
	if (i <= len_b / 2)
	{
		var1->rrb = 0;
		var1->rb = i;
	}
	else
	{
		var1->rb = 0;
		var1->rrb = len_b - i;
	}
	var1->cost = var1->ra + var1->rb + var1->rra + var1->rrb;
	if (var1->cost1 == -1 || var1->cost < var1->cost1)
	{
		var1->cost1 = var1->cost;
		var->ra = var1->ra;
		var->rb = var1->rb;
		var->rra = var1->rra;
		var->rrb = var1->rrb;
	}
}

static void	calcule_best_move(t_list *stack_a, t_list *stack_b, t_track11 *var)
{
	int			len_a;
	int			len_b;
	int			i;
	t_track11	var1;

	len_a = ft_lstsize(stack_a);
	len_b = ft_lstsize(stack_b);
	i = 0;
	inisialize_track11(&var1);
	while (i < len_b)
	{
		set_values(&var1, find_correct_index11(stack_a, stack_b), len_a);
		update_values(var, &var1, i, len_b);
		stack_b = stack_b->next;
		i++;
	}
}

void	best_move(t_list **stack_a, t_list **stack_b)
{
	t_track11	var;
	int			len;

	inisialize_track11(&var);
	len = ft_lstsize(*stack_a);
	devide1(stack_a, stack_b);
	sort_5_args(stack_a, stack_b);
	while ((*stack_b))
	{
		calcule_best_move(*stack_a, *stack_b, &var);
		do_best_move(stack_a, stack_b, &var);
	}
	last_work(stack_a);
}
