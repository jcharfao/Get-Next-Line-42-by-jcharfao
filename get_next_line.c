/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:24:22 by jcharfao          #+#    #+#             */
/*   Updated: 2024/06/07 02:49:22 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *line_checker(char *line);
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

char *file_reader(int fd, char *buf)
{
	size_t bytes_leidos;
	
	buf = ft_calloc((BUFFER_SIZE + 1), sizeof(char *));
	if (!buf)
		return (NULL);
	bytes_leidos = read(fd, buf, BUFFER_SIZE);
	buf[bytes_leidos] = 0;
	return (buf);
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
	line = line_maker(buffer);
	
}
