/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:38:51 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/02 10:51:34 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		search;
	size_t				i;

	i = 0;
	search = (unsigned char)c;
	p = (const unsigned char *)s;
	while (i < n)
	{
		if (p[i] == search)
			return ((void *)(p + i));
		i++;
	}	
	return (NULL);
}	
