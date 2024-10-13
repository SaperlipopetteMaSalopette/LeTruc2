/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:06:36 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/07 17:01:58 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	size_t			i;
	char			*ptr;

	i = 0;
	ptr = (char *)str;
	while (i < len)
	{
		ptr[i++] = '\0';
	}
}

int	main(void)
{
	return (0);
}
