/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:08:06 by thofstet          #+#    #+#             */
/*   Updated: 2024/12/19 02:25:41 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_contains(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_safe_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_check_args(int argc, char **argv)
{
	int		i;
	long	tmp;
	char	**arguments;

	i = 0;
	if (argc == 2)
		arguments = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		arguments = argv;
	}
	while (arguments[i])
	{
		tmp = ft_safe_atoi(arguments[i]);
		if (!ft_isnum(arguments[i]))
			ft_error("Error1");
		if (ft_contains(tmp, arguments, i) == 0)
			ft_error("Error2");
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error("Error3");
		i++;
	}
	if (argc == 2)
		ft_free(arguments);
}
