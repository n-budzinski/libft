/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 23:50:48 by nbudzins          #+#    #+#             */
/*   Updated: 2024/03/07 20:05:01 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dtemp;

	dtemp = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (dest);
	while(n > 0)
	{
		*(dtemp++) = *((unsigned char *)src++);
		n--;
	}
	return dest;
}
