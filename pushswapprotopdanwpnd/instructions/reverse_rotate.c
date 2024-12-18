/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:50:17 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/18 03:04:14 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverserotate(t_list **stack)
{
	t_list	*prev;
	t_list	*current;
	t_list	*last;

	prev = NULL;
	current = *stack;
	last = *stack;
	if (!stack || !*stack || !(*stack->next))
		return (-1);
	while (current->next)
	{
		prev = current;
		current = current->next;
		if (current->next == NULL)
			last = current;
	}
	if (prev)
	{
		prev->next = NULL;
		last->next = *stack;
		*stack = last;
	}
	return (0);
}

int	rra(t_list	**stack_a)
{
	if (reverserotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_list	**stack_b)
{
	if (reverserotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list	**stack_a, t_list	**stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	reverserotate(stack_a);
	reverserotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
/*
if (!stack) || !*stack || !(*stack->next)) --> We check if :

- Stack is NULL (the pointer to the list doesn-t exist)
- *stack is NULL (the list is empty)
- (*stack->next) is NULL (the list only has one element)

prev = current; --> prev starts at NULL, because there isn't a penultimate yet.
current = *stack; --> current starts at the top of the list. (*stack).
last = *stack; --> last also starts at the top, but it'll later be
	updated to point at the bottom.

while (current->next) --> We start going through the list.
prev = current; --> We begin to arrange everything.
current = current->next; --> And we move forward.
if (current->next == NULL)
	last = current; --> if we've reached the last element, we call it last.

if (prev) --> We check if prev isn't NULL, meaning it has more than 1 element.
prev->next = NULL; --> We cut the link between prev and the last element.
Making the last element an isolated node.
last->next = *stack; --> We make the last element point at
	the start of the list.
Putting the previous last element at the top of the list.
*stack = last; --> We update the principal list pointer so it
	now points at the actual
top element, which was previously the last one.
*/
