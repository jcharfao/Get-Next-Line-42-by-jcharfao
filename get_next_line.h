/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:17:31 by jcharfao          #+#    #+#             */
/*   Updated: 2024/07/27 06:10:07 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 9
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
#include <string.h>

char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t i);
void	*ft_calloc(size_t len, size_t size);
char	*ft_joinree(char *buf, char *buffer);
char	*ft_next(char *buffer);
char	*file_reader(int fd, char *buf);
char	*ft_strjoin(const char *s1, const char *s2);
int		ft_strlen(const char *s);

#endif