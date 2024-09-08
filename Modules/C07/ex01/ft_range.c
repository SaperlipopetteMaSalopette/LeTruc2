/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:26:30 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:15:52 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*total;

	if (min >= max)
	{
		return (NULL);
	}	
	i = max - min;
	total = (int *)malloc(sizeof(int) * (i));
	if (total == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		total[i] = min;
		min++;
		i++;
	}
	return (total);
}
// include stlib.h pour avoir malloc
// total -> ce qu'on va retourner a la fin
// if (min >= max) je check ca car sinon aucun interet a faire la fonction
// i = max - min -> pour avoir un int de la longueur du tableau a retourner
// j'attr la memoire via malloc. de la memoire int, un nombre i de cases
// je check ensuite si l'allocation de memoire a pu se faire convenablement.
// j'initialise mon index a 0.
// je fais une boucle while assez classique.
// a chaque bouclage mon index i de total prend la valeur du min actuel.
// j'incremente mon min pour avoir un nouveau min a rentrer dans mon total
// j'incremente mon i pour deplacer la case du total
// je return le total
