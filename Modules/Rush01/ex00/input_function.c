/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 22:20:30 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 15:02:02 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_valid_digit(char c)
{
	return (c >= '1' && c <= '4');
}

int	is_valid_space(char *str)
{
	return (*str == ' ' && is_valid_digit(*(str + 1)));
}

void	store_hints_value(int count_input, int value, t_hints *hints)
{
	if (count_input < 4)
		hints->col_up[count_input] = value;
	else if (count_input < 8)
		hints->col_down[count_input - 4] = value;
	else if (count_input < 12)
		hints->row_left[count_input - 8] = value;
	else
		hints->row_right[count_input - 12] = value;
}

int	ft_parse_input(char *str, t_hints *hints)
{
	int	count_input;

	count_input = 0;
	if (is_valid_digit(*str))
	{
		store_hints_value(count_input, ft_atoi(str), hints);
		str++;
		count_input++;
	}
	else
		return (0);
	while (*str)
	{
		if (is_valid_space(str) && count_input < 16)
		{
			str += 2;
			store_hints_value(count_input, ft_atoi(str - 1), hints);
			count_input++;
		}
		else
			return (0);
	}
	if (count_input != 16)
		return (0);
	return (1);
}

void	ft_fill_hints_map(int size, int map[size][size], t_hints *hints)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		map[0][i + 1] = hints->col_up[i];
		map[size - 1][i + 1] = hints->col_down[i];
		map[i + 1][0] = hints->row_left[i];
		map[i + 1][size - 1] = hints->row_right[i];
		i++;
	}
}
