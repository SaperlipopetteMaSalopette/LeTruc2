/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:54:47 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/10 16:27:35 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char							*str;
	unsigned int					i;
	size_t							j;

	i = start;
	j = 0;
	if (!s || start >= ft_strlen(s) || len == 0)
		return ("");
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
