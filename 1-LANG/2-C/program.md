# Cours de C

Programme

- Histoire du C
- Installation et compilateur
- Hello world
- Les fonctions
- Les types (int, char, void)
- les chaines de caracteres
- les boucles
- les conditions
- return
- include
- pointeurs, adresse
- malloc
- ...

## Exemples d'exercices

- Afficher les nombres pairs de 0 a 20
- int -> char *
- char * -> int
- split

## Cours

Qu'est-ce que compiler


```c
#include <stdlib.h>
int main(void)
{
	write(1, "hello world\n", 12);
	return (0);
}
```

```shell
cc -Wall -Werror -Wextra main.c -o helloWorld && ./helloWorld
```

le fichier `main.c` est compile et devient un programme helloWorld

Il faut une fonction `main` qui est la fonction d'entree du programme.

## Une fonction

```c
type	nomDelaFonction(parametres, ...)
{
	// contenu de la fonction
}
```

Que fait la fonction ?
Elle ecrit dans la sortie standard
