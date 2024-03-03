/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:14:32 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/24 14:25:24 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack_a, int indice)
{
	int		i;
	int		len;
	t_list	*last;
	t_list	*cur;

	i = -1;
	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	cur = *stack_a;
	len = ft_lstsize(*stack_a);
	last = ft_lstlast(*stack_a);
	while (++i < len - 2)
		cur = cur->next;
	cur->next = NULL;
	ft_lstadd_front(stack_a, last);
	if (indice == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int indice)
{
	int		i;
	int		len;
	t_list	*last;
	t_list	*cur;

	i = -1;
	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	cur = *stack_b;
	len = ft_lstsize(*stack_b);
	last = ft_lstlast(*stack_b);
	while (++i < len - 2)
		cur = cur->next;
	if (cur)
		cur->next = NULL;
	ft_lstadd_front(stack_b, last);
	if (indice == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b, int indice)
{
	(void)stack_b;
	rrb(stack_b, 1);
	rra(stack_a, 1);
	if (indice == 0)
		write(1, "rrr\n", 4);
}
