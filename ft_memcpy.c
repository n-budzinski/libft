/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 23:50:48 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/28 18:03:40 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	for(int i = 0; i < n; i++)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
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
