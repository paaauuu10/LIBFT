/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:19:05 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/15 03:30:04 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  checklen(long int i)
{
    int total;

    total = 0;
    if (i < 0)
    {
        i = i * -1;
        total++;
    }
    if (i > 0)
    {   
        i = i / 10;
        i++;
    }
    return (total);
}
char    ft_itoa(int c)
{
    char    *array;
    int    i;
    long int    nb;

    nb = c;
    i = checklen(nb);
    array = (char *)malloc(i * sizeof(char) + 1);
    if (!array)
        return 0;
    if (nb < 0)
    {
        array[0] = '-';
        nb = nb * -1;
    }
    while (nb > 0)
    {
        array[i] = nb % 10 + '0';
        nb = nb / 10;
        i--;
    }
    return ((char)array);        
}