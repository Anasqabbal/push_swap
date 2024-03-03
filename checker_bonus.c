/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:22:17 by anqabbal          #+#    #+#             */
/*   Updated: 2024/03/01 18:11:06 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	do_moves(t_list **stack_a, t_list **stack_b, char *res)
{
	if (!ft_strncmp(res, "sa\n", ft_strlen(res)))
		sa(stack_a, 1);
	else if (!ft_strncmp(res, "sb\n", ft_strlen(res)))
		sb(stack_b, 1);
	else if (!ft_strncmp(res, "ss\n", ft_strlen(res)))
		ss(stack_a, stack_b, 1);
	else if (!ft_strncmp(res, "ra\n", ft_strlen(res)))
		ra(stack_a, 1);
	else if (!ft_strncmp(res, "rb\n", ft_strlen(res)))
		rb(stack_b, 1);
	else if (!ft_strncmp(res, "rr\n", ft_strlen(res)))
		rr(stack_a, stack_b, 1);
	else if (!ft_strncmp(res, "rra\n", ft_strlen(res)))
		rra(stack_a, 1);
	else if (!ft_strncmp(res, "rrb\n", ft_strlen(res)))
		rrb(stack_b, 1);
	else if (!ft_strncmp(res, "rrr\n", ft_strlen(res)))
		rrr(stack_a, stack_b, 1);
	else if (!ft_strncmp(res, "pa\n", ft_strlen(res)))
		pa(stack_a, stack_b, 1);
	else if (!ft_strncmp(res, "pb\n", ft_strlen(res)))
		pb(stack_b, stack_a, 1);
	else
		return (0);
	return (1);
}

static void	implement_moves(t_list **stack_a, t_list **stack_b)
{
	char	*res;
	int		fd;

	fd = 0;
	while (1)
	{
		res = get_next_line(fd);
		if (!res)
			break ;
		if (!do_moves(stack_a, stack_b, res))
		{
			write(1, "Error\n", 6);
			free(res);
			return ;
		}
		free(res);
	}
	if (!_check(stack_a, ft_lstsize(*stack_a)) && !(*stack_b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

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
		implement_moves(&stack_a, &stack_b);
		ft_lstclear(&stack_a, free);
		ft_lstclear(&stack_b, free);
	}
	else
		return (write(2, "Error\n", 6), 1);
}
