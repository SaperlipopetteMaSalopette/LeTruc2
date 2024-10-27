/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:20:02 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/26 18:57:25 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	*buffer;
	char		temp[BUFFER_SIZE + 1];
	int			bytes_read;

	bytes_read = 0;
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
}

/* static char *buffer -> Buffer statique pour conserver les donnees entre
les appels.

char temp[BUFFER_SIZE] -> Buffer temporaire pour la lecture.

int bytes_read -> Nombre d'octets lus.

on initialise ce qu'on doit initialiser.
Ensuite on verifie si le fd est en dessous de 0 || si il n'y a pas de
line ou si le BUFER_SIZE est en dessous ou egal a 0. Return (-1) (erreur)
dans ces cas. (On s'assure que le descripteur (fd) est valide, que line
n'est pas nul et que BUFFER_SIZE est positif).





Buffer statique -> pour conserver les donnees entre les appels.
Buffer temporaire -> pour stocker les donnees lues a chaque appel.
*/
