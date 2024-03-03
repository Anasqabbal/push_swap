/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:48:18 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/23 13:00:29 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	inisialize_track11(t_track11 *track)
{
	track->cost1 = -1;
	track->cost = -1;
	track->rra = 0;
	track->rrb = 0;
	track->ra = 0;
	track->rb = 0;
}

int	find_correct_index11(t_list *stack_a, t_list *stack_b)
{
	int		b;
	int		best_a;
	int		index;
	t_list	*save;
	int		i;

	b = *stack_b->content;
	i = 0;
	index = -1;
	save = stack_a;
	while (save)
	{
		if (b < *save->content && (index == -1 || best_a > *save->content))
		{
			index = i;
			best_a = *save->content;
		}
		save = save->next;
		i++;
	}
	if (index == -1)
		return (find_the(stack_a, 0, ft_lstsize(stack_a)));
	return (index);
}

int	get_the_mid(t_list *stack, int len)
{
	t_list	*cur;
	t_list	*cur2;
	int		count;
	int		i;

	cur2 = stack;
	cur = stack;
	i = 0;
	while (cur && ++i)
	{
		count = 0;
		while (cur2)
		{
			if (*cur->content > *cur2->content)
				count++;
			cur2 = cur2->next;
		}
		cur2 = stack;
		if (count == ((len - 1) / 2) || count == ((len) / 2))
			break ;
		cur = cur->next;
	}
	while (--i)
		stack = stack->next;
	return (*stack->content);
}

void	devide1(t_list **stack_a, t_list **stack_b)
{
	int	mid;
	int	len;
	int	i;

	len = ft_lstsize(*stack_a);
	i = -1;
	mid = get_the_mid(*stack_a, len);
	while (++i < len - 5)
	{
		pb(stack_b, stack_a, 0);
		if (*(*stack_b)->content >= mid)
			rb(stack_b, 0);
	}
}

void	last_work(t_list **stack_a)
{
	int	len;
	int	index;

	len = ft_lstsize(*stack_a);
	index = find_the(*stack_a, 0, len);
	if (index < len / 2)
	{
		while (index--)
			ra(stack_a, 0);
	}
	else
	{
		index = len - index;
		while (index--)
			rra(stack_a, 0);
	}
}
