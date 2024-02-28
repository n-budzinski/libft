CC=gcc
CFLAGS=-Wall -Wextra -Werror
COMPILE=$(COMPILER) $(FLAGS)
SOURCE=$(wildcard *.c)
NAME=libft

all: $(NAME)

$(NAME): $(SOURCE)
	$(CC) $(CFLAGS) -c *.c
	ar -rc $(NAME).a *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a
