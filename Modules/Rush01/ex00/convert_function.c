/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:15:49 by pdemont           #+#    #+#             */
/*   Updated: 2024/08/31 16:26:55 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putnbr(int nb)
{
	char			c;
	unsigned int	val;

	if (nb < 0)
	{
		write (1, "-", 1);
		val = -nb;
	}
	else
	{
		val = nb;
	}
	if (val / 10)
	{
		ft_putnbr(val / 10);
	}
	c = (val % 10) + '0';
	write (1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	count;
	int	result;

	sign = 1;
	count = 0;
	result = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		count++;
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (count > 1)
		return (0);
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
