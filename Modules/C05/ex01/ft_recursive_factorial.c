/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:08:42 by thofstet          #+#    #+#             */
/*   Updated: 2024/09/08 13:29:27 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	r;

	i = nb;
	r = 0;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main()
{
	int numb;

	numb = 4;
	ft_recursive_factorial(numb);
}
*/
// fonction qui retourne la factorielle 
// du nombre passe en parametre.
// mais en recursif cette fois.
