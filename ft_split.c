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
/*   Updated: 2024/03/20 23:06:33 by nbudzins                                 */
/*                                               .                 .          */
/* ************************************************************************** */

#include "libft.h"

static size_t	calc_size(char const *s, char c)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static char	**memfree(char **ptr, size_t k)
{
	size_t	i;

	i = 0;
	while (i < k)
		free(ptr[i++]);
	free(ptr);
	return (NULL);
}

static char	**split(char **ptr, char const *s, char c)
{
	size_t			i;
	size_t			j;
	size_t			k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			ptr[k] = malloc(j + 1);
			if (!ptr[k])
				return (memfree(ptr, k));
			ft_strlcpy(ptr[k++], s + i, j + 1);
			i += j;
		}
		else
			i++;
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
