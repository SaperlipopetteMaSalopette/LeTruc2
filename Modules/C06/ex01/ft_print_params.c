/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:15:02 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:34:56 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	compteur_argument;
	int	place_str;

	compteur_argument = 1;
	place_str = 0;
	while (compteur_argument < argc)
	{
		place_str = 0;
		while (argv[compteur_argument][place_str] != '\0')
		{
			write (1, &argv[compteur_argument][place_str], 1);
			place_str++;
		}
		compteur_argument++;
		write (1, "\n", 1);
	}
}
// programme qui imprime les arguments qu'on lui
// donne (via argc argv)
