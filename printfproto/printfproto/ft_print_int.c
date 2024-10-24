/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:35:01 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/21 15:40:47 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_int(int n)
{
	int				nb;
	unsigned int	i;

	i = 1;
	nb = n;
	if (!n)
		return (-1);
	if (n < 0 && n != -2147483648)
	{
		nb = -n;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_putnbr(n);
	if (n == -2147483648)
		return (11);
	return (i);
}
