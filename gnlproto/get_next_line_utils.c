/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:38:49 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/28 17:45:13 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	n;

	n = 0;
	if (!s)
		return (NULL);
	while (s[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char *s1)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = malloc(sizeof) char *(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
