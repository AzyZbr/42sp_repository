/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:31:02 by gproenca          #+#    #+#             */
/*   Updated: 2026/04/13 19:06:40 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	car;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		car = (unsigned char)str[i];
		if (car >= 32 && car <= 126)
			write(1, &car, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex[car / 16], 1);
			write(1, &hex[car % 16], 1);
		}
		i++;
	}
}
