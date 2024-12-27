/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_values_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 02:05:52 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/27 09:55:06 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_pos_finder(t_list **stack_a)
{
	t_list	*current;
	int		min_pos;
	int		min_value;
	int		position;

	if (!stack_a || !*stack_a)
		return (-1);
	current = *stack_a;
	min_value = 9999;
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
	if (min_pos == -1)
		return ;
	while (min_pos-- > 0)
	{
		if (min_pos == 0)
			break;
		if (min_pos > 0)
			ra(stack_a);
	}
	pb(stack_a, stack_b);
}
