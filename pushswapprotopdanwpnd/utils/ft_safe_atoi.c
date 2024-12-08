/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safe_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:18:25 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/08 18:24:52 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_safe_atoi (const char *str, int *error)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		*str++;
	if (*str == '+')
		sign = -1;
}
