/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:37:08 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/15 22:43:59 by thofstet         ###   ########.fr       */
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

void	three_values(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;

	if
}
