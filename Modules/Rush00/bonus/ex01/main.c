/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:13:23 by keetter           #+#    #+#             */
/*   Updated: 2024/08/25 17:26:35 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write (1, &c, 1);
}

char	tab(int ligne, int col, int ligne_pos, int col_pos)
{
	if (ligne_pos == 0)
	{
		if (col_pos == 0)
			return ('/');
		else if (col_pos == (col - 1))
			return ('\\');
		else
			return ('*');
	}
	else if (ligne_pos == (ligne - 1))
	{
		if (col_pos == 0)
			return ('\\');
		else if (col_pos == (col - 1))
			return ('/');
		else
			return ('*');
	}
	else if (col_pos == 0 || col_pos == (col - 1))
	{
		return ('*');
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

int	main(void)
{
	rush(5, 3);
	return (0);
}
