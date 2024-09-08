/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:11:00 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 12:53:15 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{		
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}	
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char c[] = "a";

	printf("%s >>>> %d\n", c, ft_str_is_uppercase(c));
	
	return 0;
}
*/
// On check si il n'y a que
// des lettres majuscules
