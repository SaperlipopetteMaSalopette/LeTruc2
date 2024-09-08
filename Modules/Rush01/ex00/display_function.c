/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:39:12 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 18:49:21 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_print_map(int size, int map[size][size])
{
	int	i;
	int	j;

	i = 1;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1)
		{
			ft_putnbr(map[i][j]);
			if (j < size - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
