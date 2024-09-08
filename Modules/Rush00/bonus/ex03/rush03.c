/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:13:02 by daafonso          #+#    #+#             */
/*   Updated: 2024/08/25 17:31:08 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	tab(int ligne, int col, int ligne_pos, int col_pos)
{
	if (ligne_pos == 0)
	{
		if (col_pos == 0)
			return ('A');
		else if (col_pos == (col - 1))
			return ('A');
		else
			return ('B');
	}
	else if (ligne_pos == (ligne - 1))
	{
		if (col_pos == 0)
			return ('C');
		else if (col_pos == (col - 1))
			return ('C');
		else
			return ('B');
	}
	else if (col_pos == 0 || col_pos == (col - 1))
	{
		return ('B');
	}
	return (' ');
}

void	rush(int ligne, int col)
{
	int	ligne_pos;
	int	col_pos;

	col_pos = 0;
	if (col > 0 && ligne > 0)
	{
		while (col_pos < col)
		{
			ligne_pos = 0;
			while (ligne_pos < ligne)
			{
				ft_putchar(tab(ligne, col, ligne_pos, col_pos));
				ligne_pos++;
			}
			ft_putchar('\n');
		col_pos++;
		}
	}
	else
	{
		write(1, "Faux", 4);
	}
}
