/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:26:22 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:54:41 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
			i++;
		}
		else
		{
			str[i] = str[i];
			i++;
		}
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char o[] = "JeSuisChauve";
	ft_strlowcase(o);
	printf("%s", o);
}
*/
// on change les majuscules en minuscules
// et on ne touche pas aux autres 
// caracteres
