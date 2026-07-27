/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:35:19 by gproenca          #+#    #+#             */
/*   Updated: 2026/07/27 17:22:48 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char *line_s)
{
	int		i;
	char	*line;
	int		len;

	i = 0;
	if (!line_s || line_s[0] == '\0')
		return (NULL);
	while (line_s[i] != '\n' && line_s[i] != '\0')
		i++;
	if (line_s[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	len = i;
	i = 0;
	while (i < len)
	{
		line[i] = line_s[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_rest(char *line_s)
{
	int		i;
	int		start;
	char	*str_new;
	int		j;

	i = 0;
	j = 0;
	if (!line_s || !ft_strchr(line_s, '\n'))
		return (NULL);
	while (line_s[i] != '\n' && line_s[i] != '\0')
		i++;
	start = i + 1;
	while (line_s[start] != '\0')
		start++;
	str_new = malloc(start - (i + 1) + 1);
	if (!str_new)
		return (NULL);
	while (line_s[i + 1] != '\0')
	{
		str_new[j] = line_s[i + 1];
		i++;
		j++;
	}
	str_new[j] = '\0';
	return (str_new);
}

char	*ft_extract(char **line_s, size_t *line_len)
{
	char	*line;
	char	*reset;

	line = get_line(*line_s);
	reset = get_rest(*line_s);
	free(*line_s);
	*line_s = reset;
	if (reset)
		*line_len = ft_strlen(reset);
	else
		*line_len = 0;
	return (line);
}

static char	*read_line_buf(int fd, char *line_s, size_t *line_len)
{
	char	*buffer;
	int		bytes;
	int		has_nl;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	has_nl = (line_s && ft_strchr(line_s, '\n') != NULL);
	while (!has_nl)
	{
		bytes = ft_read_chunk(fd, buffer, line_s);
		if (bytes < 0)
			return (NULL);
		if (bytes == 0)
			break ;
		if (ft_strchr(buffer, '\n'))
			has_nl = 1;
		line_s = ft_join_len(line_s, *line_len, buffer, bytes);
		*line_len += bytes;
	}
	free(buffer);
	return (line_s);
}

char	*get_next_line(int fd)
{
	static char		*line_s = NULL;
	static size_t	line_len = 0;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line_s = read_line_buf(fd, line_s, &line_len);
	return (ft_extract(&line_s, &line_len));
}
