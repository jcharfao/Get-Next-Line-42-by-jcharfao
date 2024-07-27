/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:24:19 by jcharfao          #+#    #+#             */
/*   Updated: 2024/07/27 04:20:21 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	p = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s1[i])
		p[j++] = s1[i++];
	i = 0;
	while (s2[i])
		p[j++] = s2[i++];
	p[j] = '\0';
	return (p);
}

int	ft_strlen(const char *s)
{
	int i;

	i = -1;
	while(s[i++]);
	return (i);
}