/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:31:39 by nbudzins          #+#    #+#             */
/*   Updated: 2024/03/08 05:22:39 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//typedef unsigned int size_t;

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	//size_t i;
	//for(i = 0; i < n; i++)
	//	((char *)s)[i] = 0x00;
	ft_memset(s, '\0', n);
}
/*
int main()
{
	#include <stdio.h>
	char a[] = "HELLO";
	ft_bzero(a, 5);
	printf("%s", a);
	return 0;
}
*/
