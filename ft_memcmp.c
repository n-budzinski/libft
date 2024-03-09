/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:29:55 by nbudzins          #+#    #+#             */
/*   Updated: 2024/03/07 20:15:45 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *s1ptr = (const unsigned char *)s1;
	const unsigned char *s2ptr = (const unsigned char *)s2;

	i = 0;
	if (s1 == s2)
		return (0);
	while(i < n)
	{
		if(s1ptr[i] != s2ptr[i])
			return (s1ptr[i] - s2ptr[i]);
		i++;
	}
	return (0);
}
