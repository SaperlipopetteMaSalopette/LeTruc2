/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:26:26 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:35:15 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	compteur_argument;
	int	place_str;

	place_str = 0;
	compteur_argument = argc - 1;
	while (compteur_argument >= 1)
	{
		write (1, argv[compteur_argument], ft_strlen(argv[compteur_argument]));
		compteur_argument--;
		write (1, "\n", 1);
	}
	return (0);
}
// Programme qui imprime les arguments qu'on lui a donnes
// dans le sens inverse
