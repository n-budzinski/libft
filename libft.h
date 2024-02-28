#ifndef LIBFT_H
#define LIBFT_H

typedef unsigned char size_t;

void	ft_bzero(void *s, size_t n);
int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isascii(char c);
int	ft_isdigit(char c);
int	ft_isprint(char c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int	ft_strlen(char *c);

#endif
