/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:13:31 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/15 00:59:51 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*str;

	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (s1[last] && ft_strchr(set, s1[last - 1]))
		last--;
	str = (char *)malloc((sizeof(char) * (last - first + 1)));
	if (!str)
		return (NULL);
	ft_strlcpy(str,&s1[first],(last - first + 1));
	return (str);
}
