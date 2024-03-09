/* ************************************************************************** */
/*                                                                            */
/*                                    .                            .          */
/*      .    ▄█▀· ·▄▄▄▄•   ▄▄▌ ▐ ▄▌ ▄▄▄  ▄▄▄  .▄▄ ·  ▄▄▄· ▄▄▌ ▐ ▄▌            */
/*          ▐█  ▄ ▪▀·.█▌   ██· █▌▐█▐█ ▀█ ▀▄ █·▐█ ▀. ▐█ ▀█ ██  █▌▐█      .     */
/*          .▀▀▀█ ▄█▀▀▀•   ██ ▐█▐▐▌▄█▀▀█ ▐▀▀▄ ▄▀▀▀█▄▄█▀▀█ ██▪▐█▐▐▌            */
/*          ·  ▪▐▌█▌▪▄█▀   ▐█▌██▐█▌▐█ ▪▐▌▐█•█▌▐█▄▪▐█▐█  ▐▌▐█▌██▐█▌            */
/*    ▪        ·▀ ·▀▀▀ •    ▀▀▀▀ ▀▪ ▀  ▀ .▀  ▀ ▀▀▀▀  ▀  ▀  ▀▀▀▀ ▀             */
/*                                                          .           ▪     */
/*            .                                    .                          */
/*   ft_split.c         ▪             .                                       */
/*   .                                                                        */
/*   By: nbudzins <nbudzins@student.42warsaw.pl>            ▪                 */
/*                                                                   .        */
/*   Created: 2024/03/06 04:55:20 by nbudzins                                 */
/*   Updated: 2024/03/09 12:48:44 by nbudzins                                 */
/*                                               .                 .          */
/* ************************************************************************** */

#include "libft.h"

static size_t	calc_size(char const *s, char c)
{
	size_t			i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

static char	**split(char **ptr, char const *s, char c)
{
	size_t			i;
	size_t			j;
	size_t			k;

	i = 0;
	j = 0;
	k = 0;
	while (s[j])
	{
		if (s[j] == c)
		{
			ptr[k] = ft_substr(s, i, j - i);
			if (ptr[k++] == NULL)
				return (NULL);
			i = j + 1;
		}
		j++;
	}
	if (i < j)
	{
		ptr[k] = ft_substr(s, i, j - i);
		if (ptr[k] == NULL)
			return (NULL);
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t			nmem;
	char			**ptr;

	nmem = calc_size(s, c);
	ptr = ft_calloc(nmem + 1, sizeof (char *));
	if (ptr == NULL)
		return (NULL);
	ptr = split(ptr, s, c);
	return (ptr);
}
