/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterative_power.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:13:59 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:30:05 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = 1;
	r = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (++i <= power)
	{
		r *= nb;
	}
	return (r);
}
/*
#include <stdio.h>

int	main()
{
	printf ("%d", ft_iterative_power(5, 4));
}
*/
// on fait le nb puissance power 
// en iteratif.
