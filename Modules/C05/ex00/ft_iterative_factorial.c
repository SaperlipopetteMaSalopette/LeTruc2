/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:13:11 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:28:49 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%d .... %d", 4, ft_iterative_factorial(4));
}
*/
// fonction qui sert a retourner le resultat
// de l'operation factorielle faite a partir du nombre passe
// en parametres.
