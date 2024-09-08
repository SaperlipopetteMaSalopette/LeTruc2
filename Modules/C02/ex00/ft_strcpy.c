/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:52:29 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:50:51 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
			dest[i] = src[i];
			i++;
	}
		dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char c[] = "coucou";
	char l[] = "";

	ft_strcpy(l, c);
	printf("%s", l);
}
*/
//fonction pour copier une
//string.
