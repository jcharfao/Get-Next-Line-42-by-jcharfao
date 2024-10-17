/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:46:15 by jcharfao          #+#    #+#             */
/*   Updated: 2024/09/19 03:14:36 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main()
{
	int fd;
	char *s;
	
	fd = open("read.txt", O_RDONLY);
	
	s = get_next_line(fd);
	while (s)
	{	
		printf("%s", s);
		free(s);
		s = get_next_line(fd);
	}
	free(s);
	close(fd);
	return (0);
}