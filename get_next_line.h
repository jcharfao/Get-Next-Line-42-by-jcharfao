/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:17:31 by jcharfao          #+#    #+#             */
/*   Updated: 2024/10/17 21:26:25 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t i);
void	*ft_calloc(size_t len, size_t size);
char	*ft_joinree(char *buf, char *buffer);
char	*ft_next_line(char *buffer);
char	*ft_file_reader(int fd, char *buf, int bytes_read);
char	*ft_strjoin(const char *s1, const char *s2);
int		ft_strlen(const char *s);
char	*ft_strchr(const char *string, int searchedChar);

#endif