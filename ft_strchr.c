/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgroenve <sgroenve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:17:15 by sgroenve          #+#    #+#             */
/*   Updated: 2026/09/30 09:33:53 by sgroenve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		slen;
	int		i;
	char	*ptr;

	i = 0;
	slen = ft_strlen(s);
	ptr = (char *)s;
	while (i <= slen)
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	return (0);
}
