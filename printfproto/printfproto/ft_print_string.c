/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:20:03 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/17 04:37:36 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_string(char *s)
{
	unsigned int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}
