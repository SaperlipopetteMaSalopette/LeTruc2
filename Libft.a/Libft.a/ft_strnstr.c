/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 01:34:06 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/04 13:28:41 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 0 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

char	*ft_strnstr(const char *huge, const char *tiny, size_t len)
{
	size_t	len_tiny;

	len_tiny = 0;
	if (!huge || !len)
		return (NULL);
	if (!*tiny)
		return ((char *)huge);
	len_tiny = ft_strlen(tiny);
	while (*huge && len >= len_tiny)
	{
		if (*huge == *tiny && ft_strncmp(huge, tiny, len_tiny) == 0)
			return ((char *)huge);
		huge++;
		len--;
	}
	return (NULL);
}
