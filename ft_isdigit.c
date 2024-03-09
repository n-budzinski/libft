/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:47:19 by nbudzins          #+#    #+#             */
/*   Updated: 2024/03/08 17:20:08 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int main(){
	#include <stdio.h>
	if(ft_isdigit('A'))
		printf("True");
	else
		printf("False");
	return 0;
}
*/
