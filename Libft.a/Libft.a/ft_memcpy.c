/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:24:23 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/02 21:00:20 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest_str)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest_str + i) = *(char *)(src_str + i);
		i++;
	}
	return (dest_str);
}
