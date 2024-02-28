CC=gcc
CFLAGS=-Wall -Wextra -Werror
COMPILE=$(COMPILER) $(FLAGS)
SOURCE=$(wildcard *.c)
DIR=.
NAME=libft

all: $(NAME)

$(NAME): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -I $(DIR) -o $(NAME)


