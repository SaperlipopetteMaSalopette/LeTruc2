/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:48:50 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/02 22:10:35 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	str_len;
	size_t	i;
	char	ch;

	i = 0;
	str_len = 0;
	ch = (char)c;
	while (str[str_len] != '\0')
		str_len++;
	i = str_len - 1;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return ((char *)(str + i));
		if (str[i] != ch)
			i--;
	}
	return (NULL);
}
