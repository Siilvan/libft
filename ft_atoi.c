/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgroenve <sgroenve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:06:01 by sgroenve          #+#    #+#             */
/*   Updated: 2026/09/30 16:26:30 by sgroenve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*nptr)
{
	int	res;
	int	i;
	int	pon;

	i = 0;
	res = 0;
	pon = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			pon *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res += (nptr[i] - 48);
		if (ft_isdigit(nptr[i + 1]))
			res *= 10;
		i++;
	}
	return (res * pon);
}
