/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:19:24 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/07 10:20:57 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0;

    //ignorem els espais que puguin haver-hi a l'inici.
    while (str[i] == ' ' || str[i] == '\r' || str[i] == '\t'
            || str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
        i++;

    // mirem quin signe li pertoca
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // conversió a enter

    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return (result * sign);
}

/*int main(int argc, char **argv)
{
    int jo;
    int ells;

    if (argc == 2)
    {
        jo = ft_atoi(argv[1]);
        ells = atoi(argv[1]);
        printf("jo: %d | ells: %d\n", jo, ells);
    }
    return (0);
}*/
