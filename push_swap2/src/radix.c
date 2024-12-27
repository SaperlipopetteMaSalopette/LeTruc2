/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:08:45 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/27 07:14:02 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_stack_size(t_list *stack)
{
	int		size;
	t_list	*current;

	size = 0;
	current = stack;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}

int	get_max_bits(t_list *s)
{
	t_list	*tmp;
	int		max;
	int		max_bits;

	tmp = s;
	max = tmp->index;
	max_bits = 0;
	while (tmp)
	{
		if (tmp->index > max)
		max = tmp->index;
		tmp = tmp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_list **a, t_list **b, int totalnums)
{
	t_list	*tmp;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	size = totalnums;
	max_bits = get_max_bits(*a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			tmp = *a;
			if (((tmp->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (get_stack_size(*b) != 0)
			pa(a, b);
		i++;
	}
}
