/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:35:57 by gproenca          #+#    #+#             */
/*   Updated: 2026/07/27 17:19:18 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_gnl
{
	char	*data;
	size_t	len;
	size_t	cap;
}	t_gnl;

char	*get_next_line(int fd);

size_t	ft_strlen(const char *s);

void	*ft_memcpy(void *dst, const void *src, size_t n);

int		ft_read_chunk(int fd, char *buffer, char *line_s);

char	*get_line(char *line_s);
char	*get_rest(char *line_s);
char	*ft_extract(char **line_s, size_t *line_len);
char	*ft_strchr(const char *s, int c);
char	*ft_join_len(char *s1, size_t len1, char *s2, size_t len2);

#endif