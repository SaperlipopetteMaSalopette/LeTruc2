/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:21:21 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:52:24 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char i[] = "98767";

	printf("%s >>>> %d", i, ft_str_is_numeric(i));
  }
*/
// on check si la str n'est composee
// que de chiffres
