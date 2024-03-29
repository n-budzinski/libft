/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:15:21 by nbudzins          #+#    #+#             */
/*   Updated: 2024/03/20 22:24:35 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	iswhitespace(unsigned char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *nptr)
{
	int		result;
	char	sign;

	sign = 1;
	result = 0;
	if (!nptr || !*nptr)
		return (0);
	while (iswhitespace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr++ == '-')
			sign *= -1;
	}
	while (ft_isdigit(*nptr))
		result = result * 10 + (*nptr++ - '0');
	return (result * sign);
}
