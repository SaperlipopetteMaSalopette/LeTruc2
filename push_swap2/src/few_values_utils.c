/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_values_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 02:05:52 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/27 07:28:55 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_pos_finder(t_list **stack_a)
{
	t_list	*current;
	int		min_pos;
	int		min_value;
	int		position;

	current = *stack_a;
	min_value = current->value;
	min_pos = 0;
	position = 0;
	while (current)
	{
		if (current->value < min_value)
		{
			min_value = current->value;
			min_pos = position;
		}
		current = current->next;
		position++;
	}
	return (min_pos);
}

void	push_min_to_b(t_list **stack_a, t_list **stack_b)
{
	int	min_pos;

	min_pos = min_pos_finder(stack_a);
	if (min_pos == 1)
		sa(stack_a);
	else if (min_pos == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_pos == 3)
		rra(stack_a);
	else if (min_pos == 4)
	{
		rra(stack_a);
		rra(stack_a);
	}
	pb (stack_a, stack_b);
}
