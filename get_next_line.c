/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:24:22 by jcharfao          #+#    #+#             */
/*   Updated: 2024/06/25 17:33:38 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char *ft_joinree(char *buf, char *buffer)
{
	char *s;
	
	s = ft_strjoin(buf, buffer);
	return (s);
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
		buf = ft_strjoiree(buf, buffer);
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
	
}




/* char *line_checker(char *line);
{
	size_t i;
	
	i = -1;
	while (buf[++i])
	{
		if (buf[i] = '\n')
			return (1);
	}
	else
		return (0);
}

char *line(buf);
{
	int i;

	i = -1;
	while (buf[i++] != '\n');
	return ()
}
char *line_maker(char *buf)
{
	if (line_checker)
		
}
 */
