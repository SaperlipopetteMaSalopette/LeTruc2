/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:46:45 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/05 18:18:52 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*butt;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	butt = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	butt->next = head;
	return (0);
}
