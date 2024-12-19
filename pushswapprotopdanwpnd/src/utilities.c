/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:52:11 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/19 02:00:57 by thofstet         ###   ########.fr       */
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
	free(stack);
}

int	issorted(t_list **stack)
{
	t_list	*current;
	t_list	*current_pointer;

	current = *stack;
	current_pointer = current;
	if (!stack || !*stack)
		ft_error("No stack");
	while (current_pointer)
	{
		if (current->value > current->next->value)
		{
			ft_error("That's not sorted, bruh");
			return (0);
		}
		current_pointer++;
		return (1);
	}
	ft_error ("Errorrrr");
	return (0);
}
