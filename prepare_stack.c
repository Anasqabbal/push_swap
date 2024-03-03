/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:45:44 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/29 10:44:01 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	compare_args(long tmp, t_list **stack_a)
{
	t_list	*cur;

	cur = *stack_a;
	if (!cur)
		return (1);
	while (cur)
	{
		if (tmp == *cur->content)
			return (0);
		cur = cur->next;
	}
	return (1);
}

static int	prepare_stack(char *av, t_list **stack_a, int res)
{
	long		num;
	int			*tmp;
	t_list		*new;

	if (res == 1)
		return (1);
	num = ps_atoi((const char *)av);
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	if (!compare_args(num, stack_a))
		return (0);
	tmp = ps_alloc(num);
	new = ft_lstnew(tmp);
	if (!new)
	{
		ft_lstclear(stack_a, free);
		return (0);
	}
	ft_lstadd_back(stack_a, new);
	return (1);
}

static int	handle_spaces(int ac, char **av, t_list **stack_a, int *res)
{
	*res = 1;
	if (ac == 0)
		return (split_free(av, 1), 0);
	if (av[0] && av[0][0] == '\0')
		return (split_free(av, 1), 0);
	if (!check_arguments(ac, av, stack_a, 1))
		return (split_free(av, ac), 0);
	split_free(av, ac);
	return (1);
}

static int	the_while(char *av, t_list **stack_a, int *sign, int *res)
{
	int	i;

	i = 0;
	while (av && av[i])
	{
		if (ft_isdigit(av[i]))
			i++;
		else if ((av[i] == '-' || av[i] == '+') && *sign == 0 && i == 0)
		{
			if (av[i + 1] == '\0')
				return (ft_lstclear(stack_a, free), 0);
			*sign = 1;
			i++;
		}
		else if (av[i] == ' ')
		{
			if (!handle_spaces(split_strlen(av, ' ', 0),
					ft_split(av, ' '), stack_a, res))
				return (ft_lstclear(stack_a, free), 0);
			i += ft_strlen(av + i);
		}
		else
			return (ft_lstclear(stack_a, free), 0);
	}
	return (1);
}

int	check_arguments(int ac, char **av, t_list **stack_a, int indice)
{
	int	i;
	int	sign;
	int	res;

	if (indice == 0)
		i = 1;
	else
		i = 0;
	if ((indice == 0 && ac == 1) || !av || (av && av[i] && av[i][0] == '\0'))
		return (ft_lstclear(stack_a, free), 0);
	while (i < ac)
	{
		sign = 0;
		res = 0;
		if (av[i] && av[i][0] == '\0')
			return (ft_lstclear(stack_a, free), 0);
		if (!the_while(av[i], stack_a, &sign, &res))
			return (0);
		if (!prepare_stack(av[i], stack_a, res))
			return (ft_lstclear(stack_a, free), 0);
		i++;
	}
	return (1);
}
