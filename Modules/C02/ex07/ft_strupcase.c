/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:14:35 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:54:13 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
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
	char o[] = "mAgniFiQue";
	ft_strupcase(o);
	printf("%s", o);
}
*/
// fonction pour que les caracteres
// minuscules deviennent majuscules
// sans toucher aux autres
// caracteres.
