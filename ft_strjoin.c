/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgroenve <sgroenve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:36:20 by sgroenve          #+#    #+#             */
/*   Updated: 2026/10/01 09:20:46 by sgroenve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	char	*sjoin;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	sjoin = malloc(s1len + s2len + 1);
	if (!sjoin)
		return (NULL);
	ft_strlcat(sjoin, s1, s1len + 1);
	ft_strlcat(sjoin + s1len, s2, s2len + 1);
	return (sjoin);
}
