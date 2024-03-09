/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:15:21 by nbudzins          #+#    #+#             */
/*   Updated: 2024/03/08 18:07:48 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	iswhitespace(unsigned char c)
{
	return (c <= 32 || c == 127);
}

int	ft_atoi(const char *nptr)
{
	int result;
	char sign;

	sign = 1;
	result = 0;
	if (!nptr)
		return (0);
	while (iswhitespace(*nptr))
		nptr++;
	if(*nptr == '-' || *nptr == '+')
	{
		if (*nptr++ == '-')
			sign *= -1;
	}
	while (ft_isdigit(*nptr))
		result = result * 10 + (*nptr++ - '0');
	return (result * sign);
}
