/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:15:30 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/28 21:30:39 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_the(t_list *stack, int indice, int len)
{
	int		count;
	int		i;
	t_list	*save;

	if (!stack)
		return (0);
	count = 0;
	save = stack;
	i = 0;
	while (stack && i < len)
	{
		if (*save->content > *stack->content && indice == 0)
		{
			save = stack;
			count = i;
		}
		if (*save->content < *stack->content && indice == 1)
		{
			save = stack;
			count = i;
		}
		stack = stack->next;
		i++;
	}
	return (count);
}

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

void	go_to_sort(t_list **stack_a, t_list **stack_b)
{
	int		len;

	len = ft_lstsize(*stack_a);
	if (len <= 3)
		sort_3_args(stack_a);
	else if (len == 4 || len == 5)
		sort_5_args(stack_a, stack_b);
	else
		best_move(stack_a, stack_b);
	ft_lstclear(stack_a, free);
	ft_lstclear(stack_b, free);
}
