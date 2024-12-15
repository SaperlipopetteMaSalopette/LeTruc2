/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safe_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:43:58 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/15 22:03:43 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_a_whitespace(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
			i = 1;
		str++;
	}
	return (i);
}

int	ft_safe_atoi(const char *str)
{
	long int	result;
	int			sign;

	result = 0;
	sign = 1;
	if (!str || !*str)
		return (0);
	while (is_a_whitespace(*str) == 1)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!(*str >= '0' && *str <= '9'))
		return (0);
	while (*str >= '0' && *str <= 9)
	{
		result = result * 10 + (*str - 0);
		if ((result * sign) > INT_MAX || (result * sign) < INT_MIN)
			return (0);
		str++;
	}
	return (result * sign);
}
