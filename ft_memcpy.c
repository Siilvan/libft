/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgroenve <sgroenve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:16:39 by sgroenve          #+#    #+#             */
/*   Updated: 2026/10/02 10:36:10 by sgroenve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	i = 0;
	s = src;
	d = dest;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		*d++ = *s++;
		i++;
	}
	d[i] = 0;
	return (d);
}
