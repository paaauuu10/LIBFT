/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:29:08 by pbotargu          #+#    #+#             */
/*   Updated: 2023/05/22 14:43:48 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	capletter(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

int	ft_tolower(int c)
{
	if (capletter(c))
		return (c + 32);
	return (c);
}
