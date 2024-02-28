/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:29:32 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/28 20:54:58 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *c)
{
	int i;

	i = 0;
	while(c[i] != 0x00)
		i++;
	return i;
}
/*
int	main()
{
	#include <stdio.h>
	printf("%i", ft_strlen("j"));
	return 0;
}
*/
