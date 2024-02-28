/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 22:51:53 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/28 17:58:43 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	for(size_t i = 0; i<n; i++)
		((unsigned char *)s)[i] = (unsigned char)c;
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
