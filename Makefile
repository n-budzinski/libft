NAME=libft
INCDIR=.
RM = rm -f
ARNAME = ar rcs $(NAME).a
CC=gcc
CCFLAGS=-Wall -Wextra -Werror
CPPFLAGS=-I$(INCDIR)
COMPILE=$(CC) $(CCFLAGS) $(CPPFLAGS)
SRC = $(addsuffix .c,\
ft_atoi \
ft_bzero \
ft_calloc \
ft_isalnum \
ft_isalpha \
ft_isascii \
ft_isdigit \
ft_isprint \
ft_memchr \
ft_memcmp \
ft_memcpy \
ft_memmove \
ft_memset \
ft_split \
ft_strchr \
ft_strdup \
ft_strjoin \
ft_strlcat \
ft_strlcpy \
ft_strlen \
ft_strncmp \
ft_strnstr \
ft_strrchr \
ft_strtrim \
ft_substr \
ft_tolower \
ft_toupper)

all: $(NAME)

OBJ := $(SRC:%.c=%.o)

$(NAME): $(OBJ)
	$(ARNAME) $(OBJ)

%.o: %.c
	$(COMPILE) -c $< -o $@

so:
	$(CC) -nostartfiles -fPIC $(CCFLAGS) $(SRC)
	gcc -nostartfiles -shared -o $(NAME).so $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
