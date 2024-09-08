/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:06:31 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:30:36 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	r;

	i = 0;
	r = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		nb *= ft_recursive_power(r, power -1);
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_power(2, 4));
}
*/
// La meme chose qu'avant mais
// en recursif cette fois.
