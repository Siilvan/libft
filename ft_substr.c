/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgroenve <sgroenve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:18:19 by sgroenve          #+#    #+#             */
/*   Updated: 2026/09/30 16:34:11 by sgroenve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = malloc(len * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len);
	return (substr);
}
