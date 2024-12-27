/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_values_utils_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 07:28:15 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/27 07:30:34 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_and_rotate(t_list **stack)
{
	sa(stack);
	ra(stack);
}

void	swap_and_reverse_rotate(t_list **stack)
{
	sa(stack);
	rra(stack);
}

void	reverse_rotate_to_top(t_list **stack, int rotations)
{
	while (rotations > 0)
	{
		rra(stack);
		rotations--;
	}
}

void	rotate_to_top(t_list **stack, int rotations)
{
	while (rotations > 0)
	{
		ra(stack);
		rotations--;
	}
}
