/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:15:21 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/29 22:55:59 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_whitespace(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	unsigned int i;
	int result;
	unsigned char sign;

	i = 0;
	sign = 1;
	result = 0;
	while (is_whitespace(nptr[i]))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
			sign *= -1;
		i++;
	}
	if(ft_isdigit(nptr[i]))
	{
		while (ft_isdigit(nptr[i]))
		{
			result = result * 10 + (nptr[i] - '0');
			i++;
		}
		return (result * sign);
	}
	return (0);
}
