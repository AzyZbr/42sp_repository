/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:48:21 by gproenca          #+#    #+#             */
/*   Updated: 2026/05/27 15:37:54 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		ch;

	p = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*p == ch)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
