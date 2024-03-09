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
/*   test.c             ▪             .                                       */
/*   .                                                                        */
/*   By: nbudzins <nbudzins@student.42warsaw.pl>            ▪                 */
/*                                                                   .        */
/*   Created: 2024/03/08 05:23:15 by nbudzins                                 */
/*   Updated: 2024/03/09 00:00:33 by nbudzins                                 */
/*                                               .                 .          */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int test_strdup()
{
	char s3[] = "THIS FUNCTION SUCKS ASS\0 JUST KIDDDING :)";
	char *s4 = ft_strdup(s3);
	printf("%s", s4);
	free(s4);
}

int test_substr()
{
	char orig[] = "YOU SHOULD CUT HERE";
	char *sub = ft_substr(orig, 15, ft_strlen(orig));
	printf("%s", sub);
	free(sub);
}

int test_strjoin()
{
	char s1[] = "JOIN ME ";
	char s2[] = "IN MY CONQUEST OF THE WORLD AND BEYOND";
	char *conquest = ft_strjoin(s1, s2);
	printf("%s", conquest);
	free(conquest);
}

int main()
{
	//test_strdup();
	//test_substr();
	test_strjoin();
	return 0;
}
