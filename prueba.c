/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:35:41 by jcharfao          #+#    #+#             */
/*   Updated: 2024/05/18 02:15:32 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() 
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
}