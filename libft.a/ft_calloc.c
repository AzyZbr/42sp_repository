/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_callloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:41:35 by gproenca          #+#    #+#             */
/*   Updated: 2026/05/29 14:00:11 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	p = malloc(n * size);
	if (p)
		ft_bzero(p, n * size);
	return (p);
}
