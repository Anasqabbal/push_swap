/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:21:38 by anqabbal          #+#    #+#             */
/*   Updated: 2024/01/28 16:21:38 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

typedef struct s_track11
{
	int	cost;
	int	cost1;
	int	pb;
	int	pa;
	int	rrb;
	int	rra;
	int	ra;
	int	rb;
}	t_track11;
int		check_arguments(int ac, char **av, t_list **stack_a, int indice);
void	sa(t_list **stack_a, int indice);
void	sb(t_list **stack_b, int indice);
void	ss(t_list **stack_a, t_list **stack_b, int indice);
void	pb(t_list **stack_b, t_list **stack_a, int indice);
void	pa(t_list **stack_a, t_list **stack_b, int indice);
void	ra(t_list **stack_a, int indice);
void	rb(t_list **stack_b, int indice);
void	rr(t_list **stack_a, t_list **stack_b, int indice);
void	rra(t_list **stack_a, int indice);
void	rrb(t_list **stack_b, int indice);
void	rrr(t_list **stack_a, t_list **stack_b, int indice);
int		find_the(t_list *stack_a, int indice, int len);
int		compare_stack(t_list *stack, int indice);
int		_check(t_list **stack_a, int len);
int		*ps_alloc(long nb);
void	go_to_sort(t_list **stack_a, t_list **stack_b);
void	sort_3_args(t_list **stack);
void	sort_5_args(t_list **stack_a, t_list **stack_b);
void	best_move(t_list **stack_a, t_list **stack_b);
void	devide1(t_list **stack_a, t_list **stack_b);
int		find_correct_index11(t_list *stack_a, t_list *stack_b);
void	inisialize_track11(t_track11 *track);
int		get_the_mid(t_list *stack, int len);
void	last_work(t_list **stack_a);
void	do_best_move(t_list **stack_a, t_list **stack_b, t_track11 *var);
#endif