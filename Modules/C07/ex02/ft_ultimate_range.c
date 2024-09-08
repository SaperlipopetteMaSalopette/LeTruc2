/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:16:33 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 14:59:52 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*total;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	total = (int *)malloc(sizeof(int) * (i));
	if (total == NULL)
	{
		return (-1);
	}
	*range = total;
	i = 0;
	while (min < max)
	{
		total[i] = min;
		min++;
		i++;
	}
	return (i);
}
// tres similaire a la fonction precedente
// on initialise un index et un tableau d'int
// on check si min < max, sinon aucun interet.
// puis on calcule le nombre de cases int 
// qu'on doit allouer en memoire.
// on check si la memoire a ete allouee.
// puis on attribue la valeur de notre
// tableau total au tableau range des parametres
// puis on fait une boucle iterative pour
// attribuer chaque nouveau min a une nouvelle
// case dans notre tableau.
// et on retourne i car c'est
// la taille du range que l'on doit
// retourner
