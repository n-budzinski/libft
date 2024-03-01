/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:29:55 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/29 19:54:15 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *s1ptr;
	char *s2ptr;

	s1ptr = (char *)s1;
	s2ptr = (char *)s2;
	if (s1ptr && s2ptr)
	{
		i = 0;
		while(i < n)
		{
			if((s1ptr[i] && s2ptr[i]) && s1ptr[i] != s2ptr[i])
				return (s1ptr[i] - s2ptr[i]);
			i++;
		}
		return (0);
	}
	return (-1);
}
