/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 14:00:39 by gproenca          #+#    #+#             */
/*   Updated: 2026/07/01 16:06:00 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_count(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}
	return (count);
}

int	ft_putchar_count(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putptr_count(void *p)
{
	unsigned long	n;
	int				count;

	if (!p)
		return (ft_putstr_count("(nil)"));
	n = (unsigned long)p;
	count = ft_putstr_count("0x");
	count += ft_putp_recursive(n);
	return (count);
}

int	ft_putnbr_count(int c)
{
	long	n;
	int		count;

	n = c;
	count = 0;
	if (c < 0)
	{
		count += ft_putchar_count('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr_count((n / 10));
	count += ft_putchar_count((n % 10) + '0');
	return (count);
}

int	ft_putunsigned_count(unsigned int a)
{
	int	count;

	count = 0;
	if (a >= 10)
		count += ft_putunsigned_count((a / 10));
	count += ft_putchar_count((a % 10) + '0');
	return (count);
}
