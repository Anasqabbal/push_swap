/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:49:26 by anqabbal          #+#    #+#             */
/*   Updated: 2024/01/28 11:46:29 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cursor;

	if (lst == NULL)
		return ;
	cursor = lst;
	while (cursor != NULL)
	{
		f(cursor->content);
		cursor = cursor->next;
	}
}
