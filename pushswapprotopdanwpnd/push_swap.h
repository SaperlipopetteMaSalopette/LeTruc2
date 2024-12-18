/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:07:39 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/18 04:11:52 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include "libft/libft.h"

typedef struct t_list
{
	int				value;
	int				index;
	struct t_list	*next;
}				t_list;

int		main(int argc, char **argv);

int		ft_contains(int num, char **argv, int i);

int		ft_isnum(char *num);

void	ft_check_args(int argc, char **argv);

t_list	*get_next_min(t_list **stack);

void	index_stack(t_list **stack);

int		get_min_index(t_list **stack, int value);

int		push(t_list **stack_to, t_list **stack_from);

int		pa(t_list **stack_a, t_list **stack_b);

int		pb(t_list	**stack_b, t_list **stack_a);

int		reverserotate(t_list **stack);

int		rra(t_list	**stack_a);

int		rrb(t_list	**stack_b);

int		rrr(t_list	**stack_a, t_list	**stack_b);

int		rotate(t_list **stack);

int		ra(t_list **stack_a);

int		rb(t_list **stack_b);

int		rr(t_list **stack_a, t_list **stack_b);

int		swap(t_list **stack);

int		sa(t_list **stack_a);

int		sb(t_list **stack_b);

int		ss(t_list **stack_a, t_list **stack_b);

int		min_pos_finder(t_list **stack_a);

void	push_min_to_b(t_list **stack_a, t_list **stack_b);

void	simple_sort(t_list **stack_a, t_list **stack_b);

void	three_values(t_list **stack_a);

void	four_values(t_list **stack_a, t_list **stack_b);

void	five_values(t_list **stack_a, t_list **stack_b);

int		is_a_whitespace(char *str);

int		ft_safe_atoi(char *str);

void	free_stack(t_list **stack);

int		issorted(t_list **stack);

int		ps_lstsize(t_list *lst);

t_list	*ft_lstnew(int value);

#endif
