/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:02:58 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/29 10:45:59 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compare_stack(t_list *stack, int indice)
{
	int		n1;
	int		n2;
	t_list	*tmp;

	tmp = NULL;
	if (stack->next == NULL)
		return (1);
	if (indice == 0 && stack->next)
	{
		n1 = *(stack)->content;
		n2 = *(stack->next)->content;
	}
	else if (indice == 1)
	{
		n1 = *(stack)->content;
		tmp = ft_lstlast(stack);
		n2 = *(tmp)->content;
	}
	else
		return (0);
	if (n1 > n2)
		return (1);
	else
		return (0);
}

void	sort_3_a(t_list **stack_a)
{
	int	index;

	index = find_the(*stack_a, 1, ft_lstsize(*stack_a));
	if (!_check(stack_a, ft_lstsize(*stack_a)))
		return ;
	if (index == 0)
		ra(stack_a, 0);
	else if (index == 1)
		rra(stack_a, 0);
	if (compare_stack(*stack_a, 0))
		sa(stack_a, 0);
}

void	sort_3_args(t_list **stack)
{
	sort_3_a(stack);
}
