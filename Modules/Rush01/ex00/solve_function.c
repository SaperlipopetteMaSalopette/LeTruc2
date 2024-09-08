/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 08:38:35 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 18:46:04 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_solve_hints_in_rows(int size, int map[size][size])
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (map[i][j] == (size - 2))
			{
				handle_row_hint_4(size, map, i, j);
			}
			else if (map[i][j] == 1)
			{
				handle_row_hint_1(size, map, i, j);
			}
			else if (map[i][j] == 3)
			{
				handle_row_hint_3(size, map, i, j);
			}
			j++;
		}
		i += (size - 1);
	}
}

void	ft_solve_hints_in_cols(int size, int map[size][size])
{
	int	i;
	int	j;

	i = 1;
	while (i < size - 1)
	{
		j = 0;
		while (j < size)
		{
			if (map[i][j] == (size - 2))
			{
				handle_col_hint_4(size, map, i, j);
			}
			else if (map[i][j] == 1)
			{
				handle_col_hint_1(size, map, i, j);
			}
			else if (map[i][j] == 3)
			{
				handle_col_hint_3(size, map, i, j);
			}
			j += (size - 1);
		}
		i++;
	}
}

int	ft_solve_null_cell(int size, int map[size][size])
{
	int	i;
	int	j;
	int	nbr;

	i = 1;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1)
		{
			if (map[i][j] <= 0)
			{
				nbr = 4;
				while (nbr > 0)
				{
					if (!number_exists_in_row(size, map, i, nbr)
						&& !number_exists_in_col(size, map, j, nbr))
					{
						map[i][j] = nbr;
						if (ft_solve_null_cell(size, map))
							return (1);
						map[i][j] = 0;
					}
					nbr--;
				}
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
