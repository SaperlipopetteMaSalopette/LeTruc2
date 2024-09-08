/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:41:16 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:32:05 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	r;

	r = 0;
	if (index == 0)
	{
		return (0);
	}
	if (index < 0)
	{
		return (-1);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	r = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (r);
}
// fonction qui renvoie le n-ieme element
// de la suite de fibonacci
// on le trouve en additionant
// les deux valeurs qui se trouvent avant
// le nombre qui se trouve en parametre
