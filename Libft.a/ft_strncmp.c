/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:10:53 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/09 20:52:47 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		while (i < (n - 1) && str1[i] != '\0'
			&& str2[i] != '\0' && str1[i] == str2[i])
			i++;
		if (str1[i] == str2[i] && i == (n - 1))
			return (0);
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
