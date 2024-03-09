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
/*   Updated: 2024/03/06 20:17:32 by nbudzins                                 */
/*                                               .                 .          */
/* ************************************************************************** */

#include "libft.h"

static size_t calc_size(char const *s, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	j++;
	return (j);
}

char **ft_split(char const *s, char c)
{
	size_t nmem;
	char **ptr;
	size_t i;
	size_t j;
	size_t k;

	nmem = calc_size(s, c);
	ptr = ft_calloc(nmem + 1, sizeof(char *));
	i = 0;
	j = 0;
	k = 0;
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s[j] != '\0')
	{
		if (s[j] == c || s[j] == '\0')
		{
			ptr[k] = malloc(j - i + 1);
			if (ptr[k] != NULL)
			{
				ft_strlcpy(ptr[k], s + i, j - i + 1);
				k++;
			}
			i = j + 1;
		}
		j++;
	}
	return (ptr);
}
