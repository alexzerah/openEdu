# Cours 4 - make

- make permet d'automatiser la compilation.
- make compare les dates de fichiers

Créer un fichier Makefile.

```Makefile
all:
	cc -Wall -Wextra -Werror main.c -o program && ./program
```

```shell
make
```

## Variables

```bash
NAME = program
CFLAGS = -Wall -Wextra -Werror
SRC = main.c

cc $(CFLAGS) $(SRC) -o $(NAME) && ./$(NAME)
```

## Supprimer le programme

```bash
clean:
	rm -f $(NAME)
```

```bash
make clean
```

## Relancer tout

```bash
re: clean all
```

```bash
make re
```

## Makefile

```bash
NAME = program	

SRC = wordle.c

CC = cc
CFLAGS = -Wall -Wextra -Werror

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) && ./$(NAME)

clean:
	rm -f $(NAME)

re: clean all
```
