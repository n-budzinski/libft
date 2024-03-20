NAME=libft
INCDIR=.
RM = rm -f
ARNAME = ar rcs $(NAME).a
CC=clang
CCFLAGS=-Wall -Wextra -Werror
CPPFLAGS=-I$(INCDIR)
COMPILE=$(CC) $(CCFLAGS) $(CPPFLAGS)
SRC = $(addsuffix .c,\
ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit \
ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_split \
ft_strchr ft_strdup ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strncmp \
ft_strnstr ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper ft_itoa \
ft_strmapi ft_putchar_fd ft_striteri ft_putstr_fd ft_putendl_fd ft_putnbr_fd) 

BON = $(addsuffix .c,\
ft_lstnew_bonus ft_lstadd_front_bonus ft_lstsize_bonus ft_lstlast_bonus \
ft_lstadd_back_bonus ft_lstdelone_bonus ft_lstclear_bonus ft_lstiter_bonus \
ft_lstmap_bonus)

OBJ := $(SRC:%.c=%.o)
BOBJ := $(BON:%.c=%.o)

bonus: $(OBJ) $(BOBJ)
	$(ARNAME) $(OBJ) $(BOBJ)

all: $(NAME)

$(NAME): $(OBJ)
	$(ARNAME) $(OBJ)

%.o: %.c
	$(COMPILE) -c $< -o $@

so:
	$(CC) -nostartfiles -fPIC $(CCFLAGS) $(SRC)
	gcc -nostartfiles -shared -o $(NAME).so $(OBJ)

clean:
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(RM) $(NAME).a

re: fclean all

.PHONY: clean fclean
