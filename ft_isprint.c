/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:49:27 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/29 20:32:58 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main()
{
	#include <stdio.h>
	if(ft_isprint('A'))
		printf("True");
	else
		printf("False");
	return 0;
}
*/
