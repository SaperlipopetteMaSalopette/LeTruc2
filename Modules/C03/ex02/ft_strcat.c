/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:09:12 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:01:44 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	while (src[i] != '\0')
	{
		dest[r] = src[i];
		i++;
		r++;
	}
	dest[r] = '\0';
	return (dest);
}
// fonction pour concatener deux strings
// on skip d'abord tout ce qu'il y a dans dest
// puis on attribue les caracteres de src
// dans dest via un autre index
