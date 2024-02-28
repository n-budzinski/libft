CC=cc
CFLAGS=-Wall -Wextra -Werror
COMPILE=$(COMPILER) $(FLAGS)
SOURCE=$(wildcard *.c)
NAME=libft

all: $(NAME)

$(NAME): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -c *.c
	ar -rc $(NAME).a *.o

clean:
	rm -rf *.o
