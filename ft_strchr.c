/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:09:06 by nbudzins          #+#    #+#             */
/*   Updated: 2024/03/08 03:26:15 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char uc;

	if (!s)
		return (NULL);	
	uc = (unsigned char)c;
	while(*s != '\0')
	{
		if(*s == uc)
			return (char *)s;
		s++;
	}
	if (uc == '\0')
		return (char *)s;
	return (NULL);
}
