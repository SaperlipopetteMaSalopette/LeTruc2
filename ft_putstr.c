/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:32:16 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/16 22:33:51 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	unsigned int	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i] != '\0')
	{
		ft_putchar(s[i])
		i++;
	}
	return (0);
}