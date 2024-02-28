/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:22:16 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/28 18:02:03 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main()
{
	#include <stdio.h>
	if (ft_isascii('A'))
		printf("True");
	else
		printf("False");
	return 0;
}
*/
