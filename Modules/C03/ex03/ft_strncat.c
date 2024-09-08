/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:45:38 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:02:31 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned	int nb)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	while ((src[i] != '\0') && (i < nb))
	{
		dest[r] = src[i];
		i++;
		r++;
	}
	dest[r] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char a[] = "proutprout";
	char b[] = "jsuisMegaChauve";
	unsigned int	nb;

	nb = 4;
	printf("%s >>> %s", a, ft_strncat(a, b, nb));
	return(0);
}
*/
// meme chose qu'avant sauf qu'on le fait
// uniquement sur une certaine portion des
// caracteres de la src
