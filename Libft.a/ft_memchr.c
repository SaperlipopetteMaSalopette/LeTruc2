/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:22:17 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/03 01:06:13 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t			i;
	unsigned char	prout;
	unsigned char	*phrase;

	prout = (unsigned char)c;
	i = 0;
	phrase = (unsigned char *)ptr;
	if (!ptr)
		return (NULL);
	while (i < n && phrase[i] != prout)
	{
		i++;
	}
	if (phrase[i] == prout)
		return ((void *)(ptr + i));
	else
		return (NULL);
}
