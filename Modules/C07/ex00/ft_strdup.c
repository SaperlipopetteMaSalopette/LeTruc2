/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:41:31 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:36:57 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		longueur;
	char	*copie;

	longueur = 0;
	i = 0;
	while (src[longueur] != '\0')
	{
		longueur++;
	}
	copie = (char *) malloc(sizeof(char) * (longueur + 1));
	if (copie == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		copie[i] = src[i];
		i++;
	}
	return (copie);
}
// fonction qui sert a
// copie une string
// mais en utilisant malloc
// pour allouer de la memoire a la string qui va etre cree
