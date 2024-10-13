/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:24:42 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/07 14:37:52 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    
    ptr = (void *)malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count);
    return  (ptr);
}
    