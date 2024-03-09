/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:14:55 by nbudzins          #+#    #+#             */
/*   Updated: 2024/03/01 07:40:24 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;
	unsigned int r;
	char cc = (char)c;

	i = 0;
	r = 0;
	if (cc == '\0')
		return (char *)(s + ft_strlen(s));
	while(s[i])
	{
		if(s[i] == cc)
			r = i;
		i++;
	}
	if(r == 0 && s[r] != cc)
		return (NULL);
	return (char *)(s + r);
}
