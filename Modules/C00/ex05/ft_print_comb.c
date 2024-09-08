/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:11:55 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:43:44 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar5(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar5(a + '0');
				ft_putchar5(b + '0');
				ft_putchar5(c + '0');
				if (a != 7 || b != 8 || c != 9)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
    ft_print_comb();
    return 0;
}*/
//a < b < c
//On doit imprimer toutes les
//combinaisons de trois chiffres
//possibles sans se repeter.
//on termine le truc par la fin
//en remontant les conditions
//en atteignant la limite
//de c puis b puis a 
