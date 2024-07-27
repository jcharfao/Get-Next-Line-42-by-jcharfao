/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:24:22 by jcharfao          #+#    #+#             */
/*   Updated: 2024/07/27 04:17:50 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_joinree(char *buf, char *buffer)
{
	char *s;
	
	s = ft_strjoin(buf, buffer);
	return (s);
}

char	*ft_next(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free (buffer);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return (line);
}

char *file_reader(int fd, char *buf)
{
	char *buffer;
	size_t bytes_read;
	
	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char *));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(buffer);
			return(NULL);
		}
		buffer[bytes_read] = '\0';
		buf = ft_joinree(buf, buffer);
		if (strchr(buffer, '\n'))
			break;
	}
	free(buffer);
	return(buf);	
}

char *get_next_line(int fd)
{
	static char *buffer;
	char *line;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = file_reader(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_next(buffer);
	return (line);
}

