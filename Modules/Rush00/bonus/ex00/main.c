/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:09:21 by thofstet          #+#    #+#             */
/*   Updated: 2024/08/25 17:06:39 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	current_char(int ligne, int col, int ligne_pos, int col_pos)
{
	if (ligne_pos == 0)
	{
		if (col_pos == 0)
			return ('o');
		else if (ligne_pos == (ligne - 1))
			return ('o');
		else if (col_pos == (col - 1))
			return ('o');
		else
			return ('|');
	}
	else if (ligne_pos == (ligne - 1))
	{
		if (col_pos == 0)
			return ('o');
		else if (col_pos == (col - 1))
			return ('o');
		else
			return ('|');
	}
	else if (col_pos == 0 || col_pos == (col - 1))
	{
		return ('-');
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
				ft_putchar(current_char(ligne, col, ligne_pos, col_pos));
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
	rush(5, 5);
	return (0);
}
