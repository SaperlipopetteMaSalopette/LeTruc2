/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:29:18 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 17:23:08 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_init_map(int size, int map[size][size])
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		size;
	int		map[6][6];
	t_hints	hints;

	size = 6;
	if (argc == 2)
	{
		ft_init_map(size, map);
		if (ft_parse_input(*(argv + 1), &hints) != 0)
		{
			ft_fill_hints_map(size, map, &hints);
			ft_solve_hints_in_rows(size, map);
			ft_solve_hints_in_cols(size, map);
			if (!ft_solve_null_cell(size, map))
				ft_puterror("Error\n");
			else
				ft_print_map(size, map);
		}
		else
			ft_puterror("Error\n");
	}
	else
		ft_puterror("Error\n");
	return (0);
}
