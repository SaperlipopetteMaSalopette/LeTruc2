/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:04:10 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/05 17:09:14 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	ft_lstsize(t_list *head)
{
	size_t	count;
	t_list	*tmp;

	count = 0;
	tmp = head;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
