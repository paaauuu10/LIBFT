/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:45:52 by pbotargu          #+#    #+#             */
/*   Updated: 2023/05/26 10:46:02 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>


/*size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  len_dest;
    size_t  len_src;
	size_t	ret;
	size_t	i;

    i = 0;
	len_dest = ft_strlen(dest);
    len_src = ft_strlen(src);
    
	if (size > len_dest)
		ret = len_src + len_dest;
	else
		ret = len_src + size - 1;
	
	while (src[i] != '\0' && (len_dest < (size - 1)))
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (ret);
}

/*int main(int argc, char **argv)
{
    char    jo;
    char    ells;
    if (argc == 3)
    {
        jo = ft_strlcat(argv[1], argv[2], 5);
        ells = strlcat(argv[1], argv[2], 5);
        printf("jo: %d | ells: %d\n", jo, ells);
    }
    return (0);
}*/
