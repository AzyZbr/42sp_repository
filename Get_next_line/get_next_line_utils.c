/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:35:50 by gproenca          #+#    #+#             */
/*   Updated: 2026/07/27 17:21:08 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	if (!s)
		return (NULL);
	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr++;
	}
	if ('\0' == (char)c)
		return ((char *)ptr);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst || !src)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

char	*ft_join_len(char *s1, size_t len1, char *s2, size_t len2)
{
	char	*str;

	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	if (s1 && len1)
		ft_memcpy(str, s1, len1);
	if (s2 && len2)
		ft_memcpy(str + len1, s2, len2);
	str[len1 + len2] = '\0';
	if (s1)
		free(s1);
	return (str);
}

int	ft_read_chunk(int fd, char *buffer, char *line_s)
{
	int	bytes;

	bytes = read(fd, buffer, BUFFER_SIZE);
	if (bytes < 0)
	{
		free(buffer);
		free(line_s);
		return (-1);
	}
	buffer[bytes] = '\0';
	return (bytes);
}
