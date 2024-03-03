/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:33:58 by anqabbal          #+#    #+#             */
/*   Updated: 2024/01/28 11:46:36 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*cur;

	if (!lst || !del)
		return ;
	cur = *lst;
	while (cur != NULL)
	{
		temp = cur;
		del(cur->content);
		cur = cur->next;
		free(temp);
	}
	*lst = NULL;
}
