/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:00:30 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:24:25 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	numeros;
	int	i;
	int	signecompteur;

	signecompteur = 1;
	numeros = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signecompteur *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		numeros = (numeros * 10) + str[i] - '0';
		i++;
	}
	return (numeros * signecompteur);
}
// Ascii TO Integer
// on skip d'abord les espaces blancs
// (isspace(3)
// puis on gere les '-' en
// les faisant multiplier par -1
