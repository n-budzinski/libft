/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 23:50:48 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/28 20:59:13 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return dest;
}
/*
int	main()
{
	#include <stdio.h>
	char a[] = "HELLO";
	char b[] = "WORLD";
	ft_memcpy(a, b, 3);
	printf("%s", a);
	return 0;
}
*/
