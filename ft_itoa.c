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
/*   ft_itoa.c          ▪             .                                       */
/*   .                                                                        */
/*   By: nbudzins <nbudzins@student.42warsaw.pl>            ▪                 */
/*                                                                   .        */
/*   Created: 2024/03/09 12:57:58 by nbudzins                                 */
/*   Updated: 2024/03/09 15:28:12 by nbudzins                                 */
/*                                               .                 .          */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static size_t calcsize(int n)
{
	size_t buffsize;
	buffsize = 0;
	if (n == 0)
		buffsize++;
	else
	{
		if (n < 0)
		{
			buffsize++;
		}
		while (n)
		{
			buffsize++;
			n /= 10;
		}
	}
	return (buffsize);
}

char	*ft_itoa(int n)
{
	size_t memsize;
	char *ptr;

	memsize = calcsize(n);
	ptr = calloc(memsize + 1, sizeof (char));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		*ptr = '-';
		n *= -1;
	}
	while (n > 0)
	{
		memsize--;
		ptr[memsize] = n % 10 + '0';
		n /= 10;
	}
	return (ptr);
}


