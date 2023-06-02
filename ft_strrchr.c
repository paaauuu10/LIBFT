/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:24:49 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/02 11:49:48 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == (char) c)
			return ((char *)(s + i));
		i--;
	}
	if(s[i] == c)
		return ((char *)(s + i));
	return NULL;
}

/*int main() {
    const char *str = "s";
    int c = 't';

    // Uso de la función original strrchr
    char *result_original = strrchr(str, c);
    printf("strrchr (Original): %s\n", result_original);

    // Uso de tu réplica ft_strrchr
    char *result_repl = ft_strrchr(str, c);
    printf("ft_strrchr (Réplica): %s\n", result_repl);

    return 0;
}*/
