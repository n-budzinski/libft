/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:29:35 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/28 16:14:48 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*
int main(){
	#include <stdio.h>
	if(ft_isalpha('a'))
		printf("True");
	else
		printf("False");
	return 0;
}
*/
