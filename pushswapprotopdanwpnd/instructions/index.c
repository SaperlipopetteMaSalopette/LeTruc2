/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:38:42 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/12 20:37:11 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	t_list	*get_next_min(t_list **stack)
{
	t_list	*curr;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	curr = *stack;
	if (curr)
	{
		while (curr)
		{
			if ((curr->index == -1) && (!has_min || curr->value < min->value))
			{
				min = curr;
				has_min = 1;
			}
			curr = curr->next;
		}
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	if (!head)
		return (-1);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}
