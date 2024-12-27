/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:52:11 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/27 08:13:00 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*current;
	t_list	*temp;

	current = *stack;
	temp = NULL;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*stack = NULL;
}

int	issorted(t_list **stack)
{
	t_list	*current;

	if (!stack || !*stack)
		return (1);
	current = *stack;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

void	debug_indices(t_list *stack)
{
	t_list	*current;

	current = stack;
	while (current)
	{
		printf("Valeur : %d, Index : %d\n", current->value, current->index);
		current = current->next;
	}
}

void	debug_stacks(t_list *stack_a, t_list *stack_b)
{
	t_list	*current_a;
	t_list	*current_b;

	printf("Stack A:\n");
	current_a = stack_a;
	while (current_a)
	{
		printf("%d\n", current_a->value);
		current_a = current_a->next;
	}
	printf("\nStack B:\n");
	current_b = stack_b;
	while (current_b)
	{
		printf("%d\n", current_b->value);
		current_b = current_b->next;
	}
	printf("\n");
}
