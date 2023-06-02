/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:46:25 by pbotargu          #+#    #+#             */
/*   Updated: 2023/05/26 10:46:27 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    // reseguim tot src fins a valor 0 o fins que sigui mes petit que size, 
    //copiem i acumulem lonigutd en i
    if (size > 0)
    {
        while(src[i] != '\0' && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    // si deixem de copiar perque size es menor, 
    //tenim aquest bucle per acabar longitud de src

    while (src[count] != '\0')
        count++;
    return (count);
    
}

/*int main(int argc, char **argv)
{
    char    jo;
    char    ells;

    if (argc == 3)
    {
        jo = ft_strlcpy(argv[1], argv[2], 15);
        ells = strlcpy(argv[1], argv[2], 15);
        printf("jo: %d | ells: %d\n", jo, ells);
    }
    return (0);
}*/
