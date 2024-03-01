/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbudzins <nbudzins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:14:55 by nbudzins          #+#    #+#             */
/*   Updated: 2024/02/29 21:45:35 by nbudzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;
	char *t;
	char cc = (char)c;

	i = 0;
	t = NULL;
	while(s[i])
	{
		if(s[i] == cc)
			return (char *) &s[i];
		i++;
	}
	if(s[i] == cc)
		return (char *) &s[i];
	return (t);
}
/*
int	main()
{
	#include <stdio.h>
	char str[] = "HELLOWORLD";
	printf("%s", strrchr(str, 'W'));
	return 0;
}
*/
