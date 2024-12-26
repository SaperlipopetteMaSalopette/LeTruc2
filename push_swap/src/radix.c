/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:08:45 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/26 20:44:36 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_index(t_list **stack_a, int totalnums)
{
	t_list	*current;
	t_list	*compare;
	int		index;

	current = *stack_a;
	index = 0;
	if (!stack_a || !*stack_a)
		ft_error("erreur put_index");
	while (current)
	{
		while (compare)
		{
			if (compare->value < current->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}

int	count_bits(int totalnums)
{
	int	bits;

	bits = 0;
	while ((totalnums -1) >> bits != 0)
		bits++;
	return (bits);
}

void	process_bits(t_list **a, t_list **b, int bits, int totalnums)
{
	int	i;

	i = 0;
	while (i < totalnums)
	{
		if (((*stack_a)->index >> bits) & 1)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		i++;
	}
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	radix_sort(t_list **stack_a, t_list **stack_b, int totalnums)
{
	int	max_bits;
	int	bit;

	max_bits = count_bits(totalnums);
	bit = 0;
	while (bit < max_bits)
	{
		process_bits(stack_a, stack_b, bit, totalnums);
		bit++;
	}
}
