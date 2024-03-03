/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:12:43 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/29 10:47:57 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include "./libft/libft.h"
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

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
int		_check(t_list **stack_a, int len);
int		*ps_alloc(long nb);
char	*get_next_line(int fd);
char	*my_strchr(const char *s, int c);
char	*my_strjoin(char *s1, char *s2);
void	*my_memcpy(void *dst, const void *src, size_t n);
char	*to_join(char *s1, char *s2, int indice);
void	*my_calloc(size_t count, size_t size);
#endif