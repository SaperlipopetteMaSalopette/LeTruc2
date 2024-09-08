/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:00:31 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 18:35:16 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	skip_passe(int	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	*ft_strcpy(char *s1, int *s2)
{
	int	i;
	int	r;

	r = skip_passe(s2);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[r] = s1[i];
		i++;
		r++;
	}
	return (s2);
}

char put_sep(int *string, char *separation)
{
	int	i;
	int	r;

	r = skip_passe(string) + 1;
	i = 0;
	while (separation[i] != '\0')
	{
		string[r] = separation[i];
		r++;
		i++;
	}
	return (0);
}

int	longueur_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs)
	{
		i++;
	}
	return (i);
}
	



char *ft_strjoin(int size, char **strs, char *sep)
{
	int	quel_char;
	int	quelle_string;
	int	n;
	int	*resultat;
	int	x;
	int	sepchar;
	char *vide = "";
	int	longueur;

	n = 0;
	quel_char = 0;
	quelle_string = 0;
	resultat = 0;
	x = 0;
	sepchar	= 0;
	longueur = longueur_strs(strs);
	vide = (char *)malloc(sizeof(char) * 1);
	if (vide == NULL)
	{
		return (NULL);
	}
	resultat = (int*)malloc(sizeof(int) * (longueur));
	if (resultat == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return(vide);
		free (vide);
	}
	while (n <= size)
	{
		ft_strcpy(strs[quelle_string], resultat);
		quelle_string++;
		x++;
		put_sep(resultat, sep);
		n++;
	}
	free(resultat);
	return (0);
}
