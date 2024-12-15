/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:52:11 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/15 22:30:40 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
