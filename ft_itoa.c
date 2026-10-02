/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgroenve <sgroenve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:30:22 by sgroenve          #+#    #+#             */
/*   Updated: 2026/10/02 12:12:09 by sgroenve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_digit_count(int n)
{
	int	nlen;

	nlen = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		nlen++;
		n /= 10;
	}
	return (nlen);
}

static char	*ft_nbrs(int n)
{
	int		nlen;
	int		flag;
	char	*strn;

	flag = 0;
	if (n < 0)
	{
		n *= -1;
		flag = 1;
	}
	nlen = ft_digit_count(n) + flag;
	strn = malloc(nlen + flag);
	if (!strn)
		return (NULL);
	if (flag)
		strn[0] = '-';
	while (n > 0)
	{
		strn[nlen - 1] = 48 + (n % 10);
		n /= 10;
		nlen--;
	}
	return (strn);
}

char	*ft_itoa(int n)
{
	int		flag;
	char	*strn;

	flag = 0;
	if (n == -2147483648)
	{
		strn = malloc(12);
		ft_strlcpy(strn, "-2147483648", 12);
		return (strn);
	}
	else if (n == 0)
	{
		strn = malloc(2);
		ft_strlcpy(strn, "0", 2);
		return (strn);
	}
	return (ft_nbrs(n));
}
