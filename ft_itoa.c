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
/*   Updated: 2024/03/14 23:21:21 by nbudzins                                 */
/*                                               .                 .          */
/* ************************************************************************** */

#include "libft.h"

static size_t	calcsize(long int n)
{
	size_t	buffsize;

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
	size_t		memsize;
	long int	val;
	char		*ptr;

	val = (long int)n;
	memsize = calcsize(val);
	ptr = ft_calloc(memsize + 1, sizeof (char));
	if (!ptr)
		return (NULL);
	if (val == 0)
		*ptr = '0';
	else if (val < 0)
	{
		*ptr = '-';
		val *= -1;
	}
	while (val > 0)
	{
		memsize--;
		ptr[memsize] = val % 10 + '0';
		val /= 10;
	}
	return (ptr);
}
