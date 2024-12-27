/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:52:11 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/27 03:58:41 by thofstet         ###   ########.fr       */
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

	current = *stack;
	if (!stack || !*stack)
		ft_error("No stack");
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	ft_putendl_fd("issorted true", 1);
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
