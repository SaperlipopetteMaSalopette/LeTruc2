/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:24:27 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/10 16:20:18 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	numbers;
	int		i;

	sign = 1;
	numbers = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numbers = numbers * 10 + (str[i] - '0');
		i++;
	}
	return ((int)numbers * sign);
}
