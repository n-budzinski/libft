/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 00:07:05 by nbudzins          #+#    #+#             */
/*   Updated: 2024/03/14 06:23:20 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*dest_ptr;
	char			*src_ptr;
	unsigned int	i;

	if (dest == src)
		return (dest);
	if (n != 0)
	{
		dest_ptr = (char *)dest;
		src_ptr = (char *)src;
		i = 0;
		if (dest_ptr <= src_ptr)
		{
			while (i < n)
			{
				dest_ptr[i] = src_ptr[i++];
				//i++;
			}
		}
		else
		{
			while (n-- > 0)
			{
				dest_ptr[n] = src_ptr[n];
			}
		}
	}
	return (dest);
}
