/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 02:49:34 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/15 02:54:49 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int checkwords(char const *s, char c)
{
    int numwords = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] != c && s[i] != '\0')
        {
            numwords++;
            while (s[i] != c && s[i] != '\0')
                i++;
        }
    }
    return numwords;
}

char **ft_split(char const *s, char c)
{
    char **split;
    int i;
    int first;
    int last;

    split = (char **)malloc((checkwords(s,c) + 1) * sizeof(char *));
    if (!split)
        return NULL;
    i = 0;
    while (*s)
    {
        first = 0;
        last = 0;
        while (*s == c)
            s++;
        while (*s != c && *s != '\0')
        {
            s++;
            last++;
        }
        split[i] = ft_substr(s - last, 0, last);
        i++;
    }
    split[i] = NULL; 
    return split;
}
