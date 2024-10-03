/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 01:34:06 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/03 07:38:38 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *huge, const char *tiny, size_t len)
{
	size_t	i;
	size_t	len_tiny;

	i = 0;
	len_tiny = 0;
	if (!huge || !len)
		return (NULL);
	if (!tiny)
		return ((char *)huge);
	while (tiny[len_tiny] != '\0')
		len_tiny++;
	while (len_tiny <= len && *huge != '\0')
	{
		if (*huge == *tiny && ft_strncmp(huge, tiny, len_tiny) == 0)
			return ((char *)huge);
		huge++;
		len--;
	}
	return (NULL);
}

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
			return ((unsigned char)*str1 - (unsigned char)*str2);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	printf("%s", ft_strnstr(argv[1], argv[2], ft_strlen(argv[2])));
	return (0);
}
