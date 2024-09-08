/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:09:05 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:00:14 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned	int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && i < n) || (s2[i] != '\0' && i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
// Meme chose qu'avant sauf qu'on ne compare qu'un
// certain nombre de caracteres
