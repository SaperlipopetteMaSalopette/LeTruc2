/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:41:48 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/08 23:08:39 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_presplit(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			++i;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_presplit(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			n = 0;
			while (*s && *s != c && ++n)
				++s;
			result[i++] = ft_substr(s - n, 0, n);
		}
		else
			++s;
	}
	result[i] = 0;
	return (result);
}
