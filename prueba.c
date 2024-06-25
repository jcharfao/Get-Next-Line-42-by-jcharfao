/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:35:41 by jcharfao          #+#    #+#             */
/*   Updated: 2024/06/22 07:24:34 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* int main() 
{
    int fd = open("/home/jcharfao/42Madrid/nuevoscosos/printexample/sk", O_RDONLY);
    char buffer[255555];
    ssize_t bytesLeidos = read(fd, buffer, 15);
    size_t i = 0;
	size_t j = 0;
	char *line = calloc(bytesLeidos, sizeof(char));
	while (buffer[i] != '\n' || !buffer)
	{
		buffer[i] = line [j];
		i++;
		j++;
	}
	printf("%s", line);
} */
/* 
int main()
{
	int fd;
	char buffer[256];
	static int char_read;
	
	fd = open("read.txt", O_RDONLY);
	while ((char_read = read(fd, buffer,10)))
	{
		buffer[char_read] = '\0';
		printf("Leido -> %s", buffer);
		printf("\n");
	}
} */
void	ft_bzero(void *s, size_t i)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (i > 0)
	{
		*p = 0;
		p++;
		i--;
	}
}

void	*ft_calloc(size_t len, size_t size)
{
	void	*dest;

	dest = malloc(len * size);
	if (!dest)
		return (0);
	ft_bzero (dest, len * size);
	return (dest);
}


char *file_reader(int fd, char *buf, int bufzie)
{
	size_t bytes_leidos;
	
	buf = ft_calloc((bufzie + 1), sizeof(char *));
	if (!buf)
		return (NULL);
	bytes_leidos = read(fd, buf, bufzie);
	buf[bytes_leidos] = 0;
	return (buf);
}

char *get_next_line(int fd)
{
	static char *buffer;
	char *line;
	int bufsize = 10;
	
	if (fd < 0 || bufsize <= 0)
		return (NULL);
	buffer = file_reader(fd, buffer, bufsize);
	buffer = file_reader(fd, buffer, bufsize);
	if (!buffer)
		return (NULL);
	printf("la linea: %s", buffer);
}

int main()
{
	int fd;
	char buffer[256];
	
	fd = open("read.txt", O_RDONLY);
	get_next_line(fd);
}