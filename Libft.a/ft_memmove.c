/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:31:15 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/09 20:55:13 by thofstet         ###   ########.fr       */
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
