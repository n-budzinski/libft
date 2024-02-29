/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:29:55 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/29 16:41:07 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	if (s1 && s2)
	{
		i = 0;
		while(i < n)
		{
			if(s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
		return (0);
	}
	return (-1);
}
