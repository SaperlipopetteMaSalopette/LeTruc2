/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 06:02:41 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/25 18:21:51 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/* fonction pour compter la longueur d'un int
initialisation int len, qui servira a compter par incrementation
si le n est de 0, on return 1
tant que n est plus grand que 0 on le diviste par 10 et on incremente len
puis on return len */
