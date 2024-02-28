/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:31:39 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/28 18:42:23 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//typedef unsigned int size_t;

void	ft_bzero(void *s, size_t n)
{
	int i;
	for(i = 0; i < n; i++)
		((char *)s)[i] = 0x00;
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
