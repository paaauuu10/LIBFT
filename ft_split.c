/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:47:28 by pbotargu          #+#    #+#             */
/*   Updated: 2023/06/22 15:24:29 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	int		x;

	x = 0;
	while(s[x])
	{
		while (s[x] == c)
			x++;

	}
}
char **ft_split(char const *s, char c)
{
	
}
