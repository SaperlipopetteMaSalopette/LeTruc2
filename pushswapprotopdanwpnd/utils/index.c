/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:38:42 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/17 19:59:25 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_next_min(t_list **stack)
{
	t_list	*current;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	current = *stack;
	if (current)
	{
		while (current)
		{
			if ((current->index == -1) && (!has_min
					|| current->value < min->value))
			{
				min = current;
				has_min = 1;
			}
			current = current->next;
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

int	get_min_index(t_list **stack, int value)
{
	t_list	*current;
	int		min;

	if (!stack || !*stack)
		return (-1);
	current = *stack;
	min = stack->index;
	while (current)
	{
		if ((current->index < min) && current->index != val)
			min = current->index;
		current = current->next;
	}
	return (min);
}
