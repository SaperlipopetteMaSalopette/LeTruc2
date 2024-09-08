/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:11:55 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:53:39 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
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
	char o[] = "doajndwnadon";
	printf("%s >>>>> %d", o, ft_str_is_printable(o));
}
*/
// On check si toute la string
// est faite de caracteres
// imprimables
