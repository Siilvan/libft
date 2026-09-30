/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgroenve <sgroenve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:17:16 by sgroenve          #+#    #+#             */
/*   Updated: 2026/09/29 15:46:49 by sgroenve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long	i;

	i = 0;
	while (i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[size] = 0;
	return (ft_strlen(src));
}
