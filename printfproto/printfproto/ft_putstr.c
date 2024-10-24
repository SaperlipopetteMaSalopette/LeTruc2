/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:32:16 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/23 19:09:30 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putstr(char *s)
{
	unsigned int	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i] != '\0')
	{
		ft_print_char(s[i]);
		i++;
	}
	return (0);
}
