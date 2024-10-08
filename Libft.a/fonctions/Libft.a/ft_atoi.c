/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:24:27 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/07 17:09:42 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	signecompteur;
	int	numeros;
	int	i;

	signecompteur = 1;
	numeros = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		signecompteur = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numeros = numeros * 10 + (str[i] - '0');
		i++;
	}
	return (numeros * signecompteur);
}
