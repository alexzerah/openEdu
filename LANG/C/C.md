# C

## Qu’est-ce que C ?

C est un langage compilé.
Cela signifie qu’un compilateur prend le code source et le traduit en exécutable (code machine) par le processeur.
Une fois l’exécutable créé il est possible de l’utiliser autant de fois que souhaité.

## Installation 

Ouvrer un terminal.
Inscriver
```c
clang --version
// ou
g++ --version
```

## Hello world

```c
#include <stdio.h>

char str[12] = "Hello world";

int main(void)
{
	printf("%s\n", str);
	return (0);
}
```

```c
#include <stdio.h>
```
Contient le code ajouté à notre propre code. Ici la bibliothèque `stdio.h` est native et contient le code pour `printf()`

```c
char str[12] = "Hello world";
```
`char` : Type char relatif au caractère et chaines de caractères* 
```c
str[12]
```
Tableau de caractère (équivalent à une chaine de caractère), de 12 éléments, soit 12 octets (`char` vaut 1 octet)

```c
... = "Hello world"
```
Assignation. Ici on assigne "Hello world" à str. Il y a un dernier caractère qui est fin de chaine `/0` (compte comme 1 caractère).

Tout programme écrit en C a besoin d’une fonction d’entrée, la fonction `main`.
La fonction prend un type d’entrée (autant que d’argument ou void s’il n’y a pas d’arguments) et des arguments de sorties avec leur type (ou rien s’il n’y a pas d’argument de sortie).
Le tout est mis entre accolade
```c
int main(void)
{
}
```

La fonctionne contient du code, ici l’affilage d’un élément avec la fonction `printf()`.
`\n` indique un retour à la ligne.
Et le mot clé `return` pour renvoyer un nombre, qui indique que tout s’est bien passé `(0)` ou non `(1)`.
