/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_exists_in_row_col.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:06:22 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 15:22:03 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	number_exists_in_row(int size, int map[size][size], int i, int nbr)
{
	int	j;

	j = 1;
	while (j < size - 1)
	{
		if (map[i][j] == nbr)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

int	number_exists_in_col(int size, int map[size][size], int j, int nbr)
{
	int	i;

	i = 1;
	while (i < size - 1)
	{
		if (map[i][j] == nbr)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
