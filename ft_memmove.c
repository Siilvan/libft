/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgroenve <sgroenve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:55:52 by sgroenve          #+#    #+#             */
/*   Updated: 2026/09/29 14:54:29 by sgroenve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*sp;
	char		*dp;

	i = 0;
	sp = src;
	dp = dest;
	if (dp < sp)
	{
		while (i < n)
		{
			dp[i] = sp[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dp[n - 1] = sp[n - 1];
			n--;
		}
	}
	return (dest);
}
