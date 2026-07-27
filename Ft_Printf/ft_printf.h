/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:47:29 by gproenca          #+#    #+#             */
/*   Updated: 2026/07/01 15:52:12 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putp_recursive(unsigned long n);
int		ft_puthex_count(unsigned int n, char format);
int		ft_putunsigned_count(unsigned int a);
int		ft_putnbr_count(int c);
int		ft_putptr_count(void *p);
int		ft_putchar_count(char c);
int		ft_putstr_count(char *str);
int		ft_formats(char c, va_list args);
int		ft_printf(const char *format, ...);

char	*ft_strchr(const char *s, int c);

#endif