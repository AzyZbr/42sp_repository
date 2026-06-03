/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:48:16 by gproenca          #+#    #+#             */
/*   Updated: 2026/05/29 13:59:39 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space_counter(const char *s);

int	ft_atoi(const char *str)
{
	long	n;
	long	buf;
	int		sign;
	size_t	i;

	n = 0;
	sign = 1;
	i = space_counter(str);
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (ft_isdigit(str[i]))
	{
		buf = n;
		n = (n * 10) + (str[i++] - '0');
		if (buf > n)
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
	}
	return (n * sign);
}

static int	space_counter(const char *s)
{
	int	i;

	i = 0;
	while (s[i] == 32 || (s[i] > 8 && s[i] < 14))
		i += 1;
	return (i);
}
