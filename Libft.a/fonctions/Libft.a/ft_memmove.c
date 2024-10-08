/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totoletoto <totoletoto@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:34:02 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/04 16:16:36 by totoletoto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t len)
{
	size_t	i;

	i = 0;
	if (!dest_str || !src_str)
		return (NULL);
	if (dest_str > src_str)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dest_str + i) = *(char *)(src_str + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (size_t)len)
		{
			*(char *)(dest_str + i) = *(char *)(src_str + i);
			i++;
		}
	}
	return (dest_str);
}
