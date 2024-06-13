/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:24:19 by jcharfao          #+#    #+#             */
/*   Updated: 2024/05/18 02:50:12 by jcharfao         ###   ########.fr       */
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

