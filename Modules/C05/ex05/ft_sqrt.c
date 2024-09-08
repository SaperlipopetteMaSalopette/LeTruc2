/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:08:49 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:33:28 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		if (i * i != nb)
		{
			i++;
		}
	}
	return (0);
}
// Fonction qui sert a retourner la racine
// carree du nombre passe en parametre.
// on la trouve en faisant une boucle
// iterative ou l'on multiplie
// i par i jusqu'a trouver un moment ou
// le resultat est egal au nombre donne
// en parametre
