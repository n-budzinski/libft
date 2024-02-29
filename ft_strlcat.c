/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:26:55 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/29 16:23:50 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t dlen;
	size_t slen;
	size_t i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if(dst && src)
	{
		while(dlen + i < size - 1 && src[i])
		{
			dst[dlen + i] = src[i];
			i++;
		}
		if(size != 0 && dlen < size)
			dst[dlen + i] = '\0';
	}
	return (dlen + slen);
}
