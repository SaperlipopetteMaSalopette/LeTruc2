/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 03:12:13 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/19 02:01:00 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ps_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

t_list	*ps_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ps_lstadd_front(t_list **stack, t_list *new)
{
	new->next = *stack;
	*stack = new;
}

void	ps_lstaddback(t_list **stack, t_list *new)
{
	t_list	*ptr;

	if (stack && *stack)
	{
		ptr = *stack;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	else if (stack)
		*stack = new;
}

t_list	*ps_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}
