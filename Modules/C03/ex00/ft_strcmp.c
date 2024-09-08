/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:20:44 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:58:24 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
// la fonction strcmp sert a 
// comparer deux strings caractere
// par caractere et a retourner une valeur
// dependemment de si elles sont egales ou non
// si un caractere n'est pas identique,
// on return s1[i] - s2[i]. La soustraction
// du caractere ascii i de la chaine s1
// et de celui de la chaine s2
