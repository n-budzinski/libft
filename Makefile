CC=gcc
NAME=libft
CFLAGS=-Wall -Wextra -Werror
COMPILE=$(CC) $(FLAGS)
SRC = \
ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

all: $(NAME)

OBJ := $(SRC:%.c=%.o)

$(NAME): $(OBJ)
	$(COMPILE) $^ -o $@
	ar -rc $(NAME).a *.o

%.o: %.c
	$(COMPILE) -c $< -o $@

$(NAME): $(OBJ)
	$(COMPILE) $^ -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a
