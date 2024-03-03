/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_moves_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:50:03 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/24 16:49:32 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa(t_list **stack_a, t_list **stack_b, int indice)
{
	t_list	*cur;

	if (!(*stack_b))
		return ;
	cur = NULL;
	if ((*stack_b))
	{
		cur = *stack_b;
		*stack_b = (*stack_b)->next;
		cur->next = NULL;
	}
	ft_lstadd_front(stack_a, cur);
	if (indice == 0)
		write(1, "pa\n", 3);
}

void	pb(t_list **stack_b, t_list **stack_a, int indice)
{
	t_list	*cur;

	if (!(*stack_a))
		return ;
	cur = NULL;
	if ((*stack_a))
	{
		cur = *stack_a;
		*stack_a = (*stack_a)->next;
		cur->next = NULL;
	}
	ft_lstadd_front(stack_b, cur);
	if (indice == 0)
		write(1, "pb\n", 3);
}

void	sa(t_list **stack_a, int indice)
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp3;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp1 = *stack_a;
	tmp2 = (*stack_a)->next;
	*stack_a = (*stack_a)->next;
	*stack_a = (*stack_a)->next;
	tmp3 = *stack_a;
	*stack_a = tmp2;
	(*stack_a)->next = tmp1;
	tmp1->next = tmp3;
	if (indice == 0)
		write(1, "sa\n", 3);
}

void	sb(t_list **stack_b, int indice)
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp3;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp1 = *stack_b;
	tmp2 = (*stack_b)->next;
	*stack_b = (*stack_b)->next;
	*stack_b = (*stack_b)->next;
	tmp3 = *stack_b;
	*stack_b = tmp2;
	(*stack_b)->next = tmp1;
	tmp1->next = tmp3;
	if (indice == 0)
		write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b, int indice)
{
	sa(stack_a, 1);
	sb(stack_b, 1);
	if (indice == 0)
		write(1, "ss\n", 3);
}
