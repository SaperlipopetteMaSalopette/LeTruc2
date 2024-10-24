/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:43:18 by thofstet          #+#    #+#             */
/*   Updated: 2024/10/24 15:13:18 by thofstet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_strdup(const char *src)
{
	int		i;
	char	*result;

	i = 0;
	while (src[i])
		i++;
	result = malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static int	type_check(const char *format, va_list *arg)
{
	int	i;

	i = 0;
	if (ft_strchr(format, 'c') == 1)
		i += ft_print_char(va_arg(*arg, int));
	else if (ft_strchr(format, 's') == 1)
		i += ft_print_string(va_arg(*arg, char *));
	else if (ft_strchr(format, 'p') == 1)
		i += ft_print_pointer(va_arg(*arg, void *));
	else if (ft_strchr(format, 'd') == 1)
		i += ft_print_int(va_arg(*arg, int));
	else if (ft_strchr(format, 'i') == 1)
		i += ft_print_int(va_arg(*arg, int));
	else if (ft_strchr(format, 'u') == 1)
		i += ft_print_unsigned_dec(va_arg(*arg, unsigned int));
	else if (ft_strchr(format, 'x') == 1)
		i += ft_print_hexa(va_arg(*arg, unsigned int), "0123456789abcdef");
	else if (ft_strchr(format, 'X') == 1)
		i += ft_print_hexa(va_arg(*arg, unsigned int), "0123456789ABCDEF");
	return (i);
}

ssize_t	ft_printf(const char *str, ...)
{
	va_list			args;
	char			*s;
	int				i;

	i = 0;
	if (!str || *str == '\0')
		return (0);
	s = ft_strdup(str);
	if (!s || *s == '\0')
		return (0);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			i += type_check(str, va_arg(args, void *));
			if (*str == '%')
				i += ft_print_char('%');
		}
		else
			i = i + ft_print_char(*str);
		str++;
	}
	va_end(args);
	return (i);
}
