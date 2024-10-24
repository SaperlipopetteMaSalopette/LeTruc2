/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totoletoto <totoletoto@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:43:18 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/22 14:23:34 by totoletoto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_check(const char *input, void *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_print_char((int)arg);
	else if (*input == 's')
		i += ft_print_strings((char *)arg);
	else if (*input == 'p')
		i += ft_print_pointer((unsigned long)arg, 87);
	else if (*input == 'd')
		i += fr_print_int((int)arg);
	else if (*input == 'i')
		i += ft_print_int((int)arg);
	else if (*input == 'u')
		i += ft_print_unsigned((unsigned int)arg);
	else if (*input == 'x')
		i += ft_print_hex((unsigned int)arg, 87);
	else if (*input == 'X')
		i += ft_print_hex((unsigned int)arg, 55);
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list		args;
	unsigned int	i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			i += type_check(input, va_arg(args, void *));
			if (*input == '%')
				i += ft_print_char('%');
		}
		else
			i = i + ft_print_char(*input);
		input++;
	}
	va_end(args);
	return (i);
}
