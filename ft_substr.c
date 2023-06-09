/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:37:03 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/09 11:48:54 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Gets a substring from a string.

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
    char            *p;
    unsigned int    i;
    
    i = 0;
    if (*s == 0)
        return (ft_strdup(""));
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
    p = (char*)malloc(sizeof(char) * len + 1);
    if (!p)
        return (NULL);
        while (len--)
        {
            p[i] = s[start + i];
            i++;
        }
        p[i] = '\0';
    return (p);
}