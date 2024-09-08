/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_row_hint.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:51:08 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 15:19:05 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	handle_row_hint_4(int size, int map[size][size], int i, int j)
{
	int	values[4];
	int	k;

	k = 0;
	while (k < size - 2)
	{
		values[k] = k + 1;
		k++;
	}
	if (i == 0)
		fill_col_from_up(size, map, j, values);
	else
		fill_col_from_down(size, map, j, values);
}

void	handle_row_hint_1(int size, int map[size][size], int i, int j)
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
	if (i == 0)
		fill_col_from_up(size, map, j, values);
	else
		fill_col_from_down(size, map, j, values);
}

void	handle_row_hint_3(int size, int map[size][size], int i, int j)
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
	if (i == 0)
		fill_col_from_up(size, map, j, values);
	else
		fill_col_from_down(size, map, j, values);
}
