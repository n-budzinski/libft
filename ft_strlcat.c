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
/*   ft_strlcat.c       ▪             .                                       */
/*   .                                                                        */
/*   By: nbudzins <nbudzins@student.42warsaw.pl>            ▪                 */
/*                                                                   .        */
/*   Created: 2024/03/01 14:38:41 by nbudzins                                 */
/*   Updated: 2024/03/11 22:22:38 by nbudzins                                 */
/*                                               .                 .          */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dl;
	size_t sl;

	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	//THE BUFFER IS FULL, RETURN THE SIZE OF THE BUFFER + SOURCE LENGTH
	if (dl >= size)
		return (size + sl);
	if (size - dl > sl)
	//THERE IS SPACE FOR THE WHOLE STRING AND THE NUL TERMINATOR
		ft_memcpy(dst + dl, src, sl + 1);
	else
	{
	//COPY ONLY THE PORTION, THAT WILL FIT IN THE BUFFER AND TERMINATE
		ft_memcpy(dst + dl, src, size - dl - 1);
		dst[size - 1] = '\0';
	}
	return (dl + sl);
}
