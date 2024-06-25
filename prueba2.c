/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 07:18:31 by jcharfao          #+#    #+#             */
/*   Updated: 2024/06/25 17:35:46 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int a_checker(char *s)
{
	int i = 0;
	
	while (s[i])
	{
		if (s[i] == 'a')
			return 1;
		i++;
	}
	return 0;
}

int main()
{
	char *s;
	s = "holmquando";
	if (a_checker(s))
		printf("si");
	else
		printf("no");
}








char	*next(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;

	while (buffer[i] && buffer[i] != '\n')
		i++;
	
	if (!buffer[i])
	{
		free(buffer);
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
