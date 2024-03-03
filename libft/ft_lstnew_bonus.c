/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:28:26 by anqabbal          #+#    #+#             */
/*   Updated: 2024/01/28 11:46:52 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arr;

	arr = malloc(sizeof(t_list));
	if (!arr)
		return (0);
	arr->content = content;
	arr->next = NULL;
	return (arr);
}
