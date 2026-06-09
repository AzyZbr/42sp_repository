/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:41:35 by gproenca          #+#    #+#             */
/*   Updated: 2026/06/09 12:58:43 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (n != 0 && size > ((size_t)-1) / n)
		return (NULL);
	if (n == 0 || size == 0)
		return (malloc(0));
	p = malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (n * size));
	return (p);
}
