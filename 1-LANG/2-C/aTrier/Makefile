NAME = program	

SRC = wordle.c

CC = cc
CFLAGS = -Wall -Wextra -Werror

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) && ./$(NAME)

clean:
	rm -f $(NAME)

re: clean all
