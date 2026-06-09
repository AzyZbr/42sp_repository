/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 14:02:42 by gproenca          #+#    #+#             */
/*   Updated: 2026/05/29 14:05:38 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*cpy_str;

	size = (ft_strlen(s) + 1);
	cpy_str = (char *)malloc(size * sizeof(char));
	if (!cpy_str)
		return (NULL);
	ft_memcpy(cpy_str, s, size);
	return (cpy_str);
}
