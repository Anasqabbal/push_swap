/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_moves_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:19:08 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/29 11:00:25 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_list **stack_a, int indice)
{
	t_list	*tmp;

	if (!(*stack_a))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_a, tmp);
	if (indice == 0)
		write(1, "ra\n", 3);
}

void	rb(t_list **stack_b, int indice)
{
	t_list	*tmp;

	if (!(*stack_b))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_b, tmp);
	if (indice == 0)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b, int indice)
{
	ra(stack_a, 1);
	rb(stack_b, 1);
	if (indice == 0)
		write(1, "rr\n", 3);
}
