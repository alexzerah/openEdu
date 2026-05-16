# Hello world

## Création du main

Dans votre dossier projet, créer un fichier `main.c`.

```c
int main(void)
{
	return (0);
}
```

- La fonction `main` est la fonction principale
- Une fonction prend 
  - `void` signifie que la fonction ne prend aucun argument.
  - un type de retour (ici `int` car on renvoie l'entier 0)
  - un nom, ici `main`
  - des accolades et le contenu à l'intérieur des accolades


### Lisibilité du code

- Les accolades sont mis à la ligne
- La valeur de retour est mis entre parenthèse

### Pourquoi renvoyer `0` ?

C'est une convention héritée d'Unix qui signifie tout s'est bien passé.
Une autre valeur signifie qu'il y a une erreur. On aurait ainsi utiliser la sortie 1.
Ces nombres sont liés à la sortie du terminal (sortie standard, sortie erreur...)

## Compiler

Le langage C est un langage compilé en code machine.
Cela signifie que le code est transformé en langage machine avant d'être éxecuté.
Il existe des langages interprétés selon l'environnement qui fonctionnent différement (JS, Python...)

```bash
cc main.c
ls
# main.c a.out
```

> J'utilise `cc` mais il est possible d'utiliser `gcc` ou `clang`

Vous voyez maintenant un fichier `a.out`.

Faites la commande suivante pour éxecuter le code.
```bash
./a.out
```

Il ne se passe rien car nous n'avons pas encore demandé d'afficher quoi que ce soit.

### Rigueur

Comme nous sommes rigoureux, nous allons compilé en nous assurant de n'avoir aucun warning

```bash
cc -Wall -Wextra -Werror main.c -o program
```
- `-Wall` active des avertissements utiles (variable non utilisé, fonction sans prototype...)
- `-Wextra` ajoute des vérifications strictes (paramétres inutilisés, cas limites...)
- `-Werror` transforme les warnings en erreurs
- `-o` est une option du compilateur qui permet de définir le nom du fichier de sortie. Par défault, l'executable est nommé `a.out`

## printf

Nous allons désormais utiliser une fonction. `printf()` est une fonction fournie par la bibliothèque standard du C (stdio.h)

Modifions un peu notre code

```c
#include <stdio.h>

int main(void)
{
	printf("Notre phrase est : %s\n", "hello world");
	return (0);
}
```

- `printf()` lit la chaîne, détecte les `%`, et remplace dynamiquement avec les arguments suivants
- `#include <stdio.h>` est un header qui permet d'utiliser la fonction `printf`
- `printf()` prend plusieurs arguments.
  - Le premier est une chaîne de caractère qui contient la valeur dynamique `%s`. Celle-ci sera remplacé par le paramètre suivant. Le pourcentage indique que c'est une valeur dynamique et le s que c'est une chaîne de caractère
  - Le deuxième argument est notre valeur, ici `hello world`, suivi d'un `\n` qui permet de faire un retour à la ligne.

### Principaux formats de printf

```c
// Entiers
%d   // int (décimal signé)
%i   // int (équivalent à %d)
%u   // unsigned int

// Bases numériques
%x   // hexadécimal (abcdef)
%X   // hexadécimal (ABCDEF)
%o   // octal

// Caractères et chaînes
%c   // caractère
%s   // chaîne de caractères (char *)

// Nombres flottants
%f   // float / double (notation décimale)
%e   // notation scientifique (ex: 1.23e+02)

// Pointeurs
%p   // adresse mémoire (void *)
```
