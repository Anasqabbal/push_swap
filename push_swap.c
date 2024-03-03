/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:52:24 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/23 10:52:24 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		res;
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	res = check_arguments(ac, av, &stack_a, 0);
	if (res)
	{
		if (!_check(&stack_a, ft_lstsize(stack_a)))
			return (ft_lstclear(&stack_a, free), 0);
		else
			go_to_sort(&stack_a, &stack_b);
	}
	else
		return (ft_putendl_fd("Error", 2), 1);
	return (0);
}
