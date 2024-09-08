/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:21:39 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:05:22 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			nb = 147483648;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr (nb / 10);
			nb %= 10;
		}
		if (nb < 10)
			ft_putchar (nb + 48);
	}
}
/*
int	main(void)
{
	ft_putnbr (8);
	return (0);
}
*/
// fonction pour imprimer un nombre
// donne en parametres.
// on check d'abord les cas de 
// INT_MAX et INT_MIN
// puis on fait les cas de nombres 
// negatifs. puis le reste
