/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:08:45 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/27 00:42:38 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
		if (((*a)->index >> bits) & 1)
			ra(a);
		else
			pb(a, b);
		i++;
	}
	while (*b)
		pa(a, b);
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
	if (bit > max_bits)
		ft_putendl_fd("zizicaca", 1);
}
