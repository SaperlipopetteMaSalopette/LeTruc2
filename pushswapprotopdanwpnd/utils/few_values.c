/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:37:08 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/15 23:27:17 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	issorted(t_list **stack)
{
	t_list	current;

	current = *stack;
	while (current)
	{
		if (current->value > current->next->value)
		{
			ft_error("That's not sorted, bruh");
			return (0);
		}
		current = current->next;
		return (1);
	}
}

int	simple_sort(t_list **stack_a, t_list **stack_b)
{
	if (issorted(stack_a) == 1 || ft_lstsize(*stack_a) < 2)
		return ;
	if (ft_lstsize(stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(stack) == 3)
		three_values(stack);
	else if (ft_lstsize(stack_a) == 4)
		four_values(stack_a, stack_b);
	else if (ft_lstsize(stack_a) == 5)
		five_values(stack_a, stack_b);
}

void	three_values(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (a > b && b > c)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (a > c && c > b)
		ra(stack_a);
	else if (b > a && a > c)
		sa(stack_a);
	else if (b > c && c > a)
		rra(stack_a);
	else if (c > a && a > b)
	{
		sa(stack_a);
		ra(stack_a);
	}
	return ;
}
