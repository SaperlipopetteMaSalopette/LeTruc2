/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:31:38 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:51:25 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char k[] = "coucou";
	char l[] = "mec";

	unsigned int n;

	n = 9;

	ft_strncpy(k, l, n);

	printf("%s", k);
}
*/
//fonction pour copier une
//string sur une certaine
//longueur decidee par n.
