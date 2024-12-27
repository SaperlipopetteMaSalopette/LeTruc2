/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:44:25 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/27 07:33:43 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !*stack_a)
		ft_error("Error, no stack_aa");
	if (issorted(stack_a) == 1 || ps_lstsize(*stack_a) < 2)
		return ;
	else if (ps_lstsize(*stack_a) == 2)
		sa(stack_a);
	else if (ps_lstsize(*stack_a) == 3)
		three_values(stack_a);
	else if (ps_lstsize(*stack_a) == 4)
		four_values(stack_a, stack_b);
	else if (ps_lstsize(*stack_a) == 5)
		five_values(stack_a, stack_b);
}

void	three_values(t_list **stack_a)
{
	int	top;
	int	middle;
	int	bottom;

	top = (*stack_a)->value;
	middle = (*stack_a)->next->value;
	bottom = (*stack_a)->next->next->value;
	if (top > middle && middle > bottom)
		swap_and_reverse_rotate(stack_a);
	else if (top > bottom && bottom > middle)
		ra(stack_a);
	else if (middle > top && top > bottom)
		rra(stack_a);
	else if (middle > bottom && bottom > top)
		swap_and_rotate(stack_a);
	else if (bottom > top && top > middle)
		sa(stack_a);
}

void	four_values(t_list **stack_a, t_list **stack_b)
{
	int	min_pos;

	min_pos = min_pos_finder(stack_a);
	if (min_pos == 1)
		ra(stack_a);
	else if (min_pos == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_pos == 3)
		rra(stack_a);
	if (!issorted(stack_a))
	{
		pb(stack_a, stack_b);
		three_values(stack_a);
		pa(stack_a, stack_b);
	}
}

void	five_values(t_list **stack_a, t_list **stack_b)
{
	push_min_to_b(stack_a, stack_b);
	push_min_to_b(stack_a, stack_b);
	three_values(stack_a);
	pa (stack_a, stack_b);
	pa (stack_a, stack_b);
}
