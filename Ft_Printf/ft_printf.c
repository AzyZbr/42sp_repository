/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:59:43 by gproenca          #+#    #+#             */
/*   Updated: 2026/07/06 16:11:43 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return (NULL);
}

int	ft_formats(char c, va_list args)
{
	int	p;

	p = 0;
	if (c == 'c')
		p += ft_putchar_count(va_arg(args, int));
	else if (c == 's')
		p += ft_putstr_count(va_arg(args, char *));
	else if (c == 'p')
		p += ft_putptr_count(va_arg(args, void *));
	else if (c == 'd')
		p += ft_putnbr_count(va_arg(args, int));
	else if (c == 'i')
		p += ft_putnbr_count(va_arg(args, int));
	else if (c == 'u')
		p += ft_putunsigned_count(va_arg(args, unsigned int));
	else if (c == 'x')
		p += ft_puthex_count(va_arg(args, unsigned int), 'x');
	else if (c == 'X')
		p += ft_puthex_count(va_arg(args, unsigned int), 'X');
	else if (c == '%')
		p += ft_putchar_count('%');
	return (p);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && (*format + 1))
		{
			format++;
			count += ft_formats(*format, args);
		}
		else
			count += ft_putchar_count(*format);
		format++;
	}
	va_end(args);
	return (count);
}
