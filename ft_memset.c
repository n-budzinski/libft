/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 22:51:53 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/28 21:00:11 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while(i<n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return s;
}
/*
int	main()
{
	#include <stdio.h>
	unsigned char s[] = "HELLO";
	printf("%s", (unsigned char *)ft_memset(s, 'X', 2));
	return 0;
}
*/
