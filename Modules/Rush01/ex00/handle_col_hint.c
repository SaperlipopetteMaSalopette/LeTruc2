/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_col_hint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:56:21 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 15:15:01 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	handle_col_hint_4(int size, int map[size][size], int i, int j)
{
	int	values[4];
	int	k;

	k = 0;
	while (k < size - 2)
	{
		values[k] = k + 1;
		k++;
	}
	if (j == 0)
		fill_row_from_left(size, map, i, values);
	else
		fill_row_from_right(size, map, i, values);
}

void	handle_col_hint_1(int size, int map[size][size], int i, int j)
{
	int	values[4];
	int	k;

	k = 0;
	while (k < size - 2)
	{
		if (k == 0)
			values[k] = size - 2;
		else
			values[k] = 0;
		k++;
	}
	if (j == 0)
		fill_row_from_left(size, map, i, values);
	else
		fill_row_from_right(size, map, i, values);
}

void	handle_col_hint_3(int size, int map[size][size], int i, int j)
{
	int	values[4];
	int	k;

	k = 0;
	while (k < size - 2)
	{
		if (k == 2)
			values[k] = size - 2;
		else
			values[k] = -1;
		k++;
	}
	if (j == 0)
		fill_row_from_left(size, map, i, values);
	else
		fill_row_from_right(size, map, i, values);
}
