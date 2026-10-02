/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgroenve <sgroenve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:17:56 by sgroenve          #+#    #+#             */
/*   Updated: 2026/10/01 14:40:31 by sgroenve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int		mark;
	size_t	i;
	int		count;

	i = 0;
	mark = 0;
	count = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c || s[i] == 0)
		{
			if (mark == 1)
				count++;
			mark = 0;
		}
		else
			mark = 1;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		next_c;
	char	**ptrarray;

	i = 0;
	j = 0;
	ptrarray = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!ptrarray)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		next_c = 0;
		while (s[i + next_c] != c && s[i + next_c])
			next_c++;
		ptrarray[j] = ft_substr(s + i, 0, next_c + 1);
		i += next_c;
		j++;
	}
	ptrarray[j] = 0;
	return (ptrarray);
}
