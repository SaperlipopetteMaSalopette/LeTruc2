/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:41:49 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 14:38:18 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	char	*d_str;

	d_str = str;
	while (*str)
		str++;
	return (str - d_str);
}

void	ft_putstr(char *str)
{
	write (1, str, ft_strlen(str));
}

void	ft_puterror(char *str)
{
	write (2, str, ft_strlen(str));
}
