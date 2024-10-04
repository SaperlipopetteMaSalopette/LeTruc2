/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:28:59 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/04 14:08:49 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	signecompteur;
	int	numeros;
	int	i;

	signe = 1;
	numeros = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		signecompteur = (- signecompteur);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		{
			numeros = numeros * 10 + (str[i] - '0');
			i++;
		}
	return (numeros * sign);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%")
}
