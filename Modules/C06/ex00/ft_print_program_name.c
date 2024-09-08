/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:33:23 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:34:32 by thofstet         ###   ########.fr       */
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

int	main(int argc, char	**argv)
{
	if (argc >= 0)
	{
		write (1, argv[0], ft_strlen(argv[0]));
		write (1, "\n", 1);
	}
}
// Programme qui imprime le nom du programme
// (il se trouve tjr dans le argv[0])
