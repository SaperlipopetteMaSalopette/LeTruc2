/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:05:56 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/27 10:48:21 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new;
	char	**arguments;
	int		i;

	i = 1;
	arguments = NULL;
	if (argc < 2)
		ft_error("No values entered bro");
	else if (argc == 2)
		arguments = ft_split(argv[1], ' ');
	else if (argc > 2)
	{
		printf("argc > 2\n");
		arguments = argv;
	}
	while (arguments && arguments[i])
	{
		new = ps_lstnew(ft_safe_atoi(arguments[i]));
		if (!new)
			ft_error("Memory allocation failed");
		ps_lstaddback(stack, new);
		i++;
	}
	index_stack(stack);
	debug_indices(*stack);
	if (argc == 2)
		ft_free(arguments);
}

void	stack_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ps_lstsize(*stack_a);
	printf("size : %d\n", size);
	if (size < 6)
		simple_sort(stack_a, stack_b);
	if (size > 5)
		radix_sort(stack_a, stack_b, size);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (-1);
	ft_check_args(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (!stack_a || !stack_b)
		ft_error("Error, no stack_a");
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, argc, argv);
	if (issorted(stack_a) == 1)
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	else
	{
		stack_sort(stack_a, stack_b);
		debug_stacks(*stack_a, *stack_b);
		free_stack(stack_a);
		free_stack(stack_b);
		ft_putendl_fd("tri fini", 1);
		return (0);
	}
}
