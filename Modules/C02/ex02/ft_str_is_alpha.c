/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:14:53 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:52:00 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char o[] = "aldkdjadn";

	printf("%s >>>> %d\n", o, ft_str_is_alpha(o));

}
*/
//on check si la str
//n'est composee que de
//caracteres
//alphabetiques
