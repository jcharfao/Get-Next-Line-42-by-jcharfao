/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:17:31 by jcharfao          #+#    #+#             */
/*   Updated: 2024/05/10 23:09:17 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 250000
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t i);
void	*ft_calloc(size_t len, size_t size);

#endif GET_NEXT_LINE_H