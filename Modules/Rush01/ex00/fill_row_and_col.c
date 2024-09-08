/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_row_and_col.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:41:08 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 15:12:04 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	fill_col_from_up(int size, int map[size][size], int j,
	int values[size - 2])
{
	int	k;

	k = 0;
	while (k < size - 2)
	{
		if (map[k + 1][j] <= 0 &&
			!number_exists_in_col(size, map, j, values[k]) &&
			!number_exists_in_row(size, map, k + 1, values[k]))
		{
			map[k + 1][j] = values[k];
		}
		k++;
	}
}

void	fill_col_from_down(int size, int map[size][size], int j,
	int values[size - 2])
{
	int	k;

	k = 0;
	while (k < size - 2)
	{
		if (map[size - k - 2][j] <= 0 &&
			!number_exists_in_col(size, map, j, values[k]) &&
			!number_exists_in_row(size, map, size - k - 2, values[k]))
		{
			map[size - k - 2][j] = values[k];
		}
		k++;
	}
}

void	fill_row_from_left(int size, int map[size][size], int i,
	int values[size - 2])
{
	int	k;

	k = 0;
	while (k < size - 2)
	{
		if (map[i][k + 1] <= 0 &&
			!number_exists_in_col(size, map, k + 1, values[k]) &&
			!number_exists_in_row(size, map, i, values[k]))
		{
			map[i][k + 1] = values[k];
		}
		k++;
	}
}

void	fill_row_from_right(int size, int map[size][size], int i,
	int values[size - 2])
{
	int	k;

	k = 0;
	while (k < size - 2)
	{
		if (map[i][size - k - 2] <= 0 &&
			!number_exists_in_col(size, map, size - k - 2, values[k]) &&
			!number_exists_in_row(size, map, i, values[k]))
		{
			map[i][size - k - 2] = values[k];
		}
		k++;
	}
}
