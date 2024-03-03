/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <anqabbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:52:55 by anqabbal          #+#    #+#             */
/*   Updated: 2024/02/23 21:55:26 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*arr;

	arr = (char *)b;
	i = 0;
	while (i < len)
	{
		*(arr + i) = (unsigned char)c;
		i++;
	}
	return (arr);
}
