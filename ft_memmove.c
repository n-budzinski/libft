/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 00:07:05 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/28 18:09:19 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *dest_ptr;
	char *src_ptr;
	unsigned int i;
	if (!src || !dest)
		return 0x00;
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	if (dest_ptr < src_ptr)
	{
		i=0;
		while(n>0)
		{
			dest_ptr[i] = src_ptr[i];
			n--;
		}
	}
	else
	{
		while(i<n)
		{
			dest_ptr[n] = src_ptr[n];
			i++;
		}
	}
	return dest;	
}

int	main()
{

	return 0;
}
