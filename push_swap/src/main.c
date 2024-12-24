/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:05:56 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/24 00:20:56 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new;
	char	**arguments;
	int		i;

	i = 0;
	arguments = 0;
	if (argc < 2)
		ft_error("No values entered bro");
	else if (argc == 2)
		arguments = ft_split(argv[1], ' ');
	else if (argc > 2)
	{
		i = 1;
		arguments = argv;
	}
	while (arguments[i])
	{
		new = ps_lstnew(ft_safe_atoi(arguments[i]));
		ps_lstaddback(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(arguments);
}

void	stack_sort(t_list **stack_a, t_list **stack_b)
{
	if (ps_lstsize(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		ft_error("prout");
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
	if (issorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	stack_sort(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
