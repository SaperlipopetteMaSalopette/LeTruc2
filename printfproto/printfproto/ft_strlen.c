/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 04:36:12 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/17 04:37:10 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ssize_t	ft_strlen(char *str)
{
	ssize_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}