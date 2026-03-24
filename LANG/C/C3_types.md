```table-of-contents
```

## 1. Définition

Un type sert à expliquer au compilateur :
- Quelle nature de donnée on manipule
- Combien d'octets il faut réserver
- Comment interpréter les bits en mémoire
- Quelles opérations sont autorisées

```c
int age = 25; // entier
char letter = 'A'; // caractère
float price = 19.99f; // nombre à virgule
```

## 2. Char

Un char prend 1 octet.

```c
char c = 'A';
char d = 65;
```

### 2.1 Table ASCII

La table ascii est la correspondance entre les symboles char ('A', '!'...) et un int.
Souvent, `'A'` vaut 65 en table ASCII.
`'a'` vaut 97
`0` vaut 48

un char est donc un entier très petit (un octet) qu'on peut afficher comme caractère

## 3. Int

Int sert à stocker des entiers

```c
int x = 42;
int y = -12;
```

On l'utilise partout :

- compteurs de boucle
- tailles d'éléments
- résultats de calcul
- valeurs entières générales

##  4. `short`, `long`, `long long`

Correspond à des entiers avec des tailles différentes

```c
short a = 10;
long b = 1000000L;
long long c = 9999999999LL;
```

- short : plus petit ou égal à `int`
- long : plus grand ou égal à `int`
- long long : très grand entier

La taille exacte dépend de l'architecture et du compilateur
`sizeof(...)` permet de connaitre la taille précise pour le compilateur actuel

```c
printf("%zu\n", sizeof(int));
printf("%zu\n", sizeof(long));
printf("%zu\n", sizeof(long long));
```

## 5. float et double

Ce sont des types à virgule flottante.
```c
float a = 3.14f;
double b = 3.1415926535;
```

- float : précision faible (32 bits en général)
- double : précision plus grande (64 bits en général)

> ⚠️ Les floats et les doubles ne représentent pas EXACTEMENT tous les nombres décimaux

```c
double x = 0.1 + 0.2;
printf("%.17f\n", x);
// On obtient PAS exactement 0.3
```

Les flottants sont pratiques MAIS introduisent des approximations.

## 6. Void

`void` signifie absence de type utile ou pas de valeur

```c
void bonjour(void)
{
	printf("Bonjour\n");
}
```

```c
void *ptr;
```
un pointeur void * est un pointeur vers "quelque chose" sans préciser quoi.

## 7. Les modificateurs de type

### 7.1 signed et unsigned

Ils s'appliquent aux entiers

- Signed : Variable peut être négative
- Unsigned : Variable positive ou nulle

```c
signed int a = -5;
unsigned int b = 42;
```

```c
unsigned int x = 0;
x = x - 1;
printf("%u\n", x); // On obtient pas -1 mais un nombre très grand car il y a le retour du modulo
```

Unsigned signifie : pas de négatif.

### Combinaison classique

```c
unsigned char
unsigned int
unsigned long
unsigned long long
signed char
short int
long int
```

```c
unsigned long n = 100;
```

## 8. Les tailles

C garantit des relations entre types, pas forcément une taille fixe.

- `char`  = 1 octet
- `short` = 2 octets
- `int` = 4 octets
- `long` = 8 octets sur beaucoup de machines modernes
- `long long` = 8 octets
- `float` = 4 octets
- `double` = 8 octets

mais le plus important pour savoir c'est

```c
printf("%zu\n", sizeof(char))
prtinf("%zu\n", sizeof(int))
printf("%zu\n", sizeof(double))
```

## 9. Les conversions de type

### Conversion implicite

```c
int a = 5;
double b = a;
```

ici `a` devient `5.0`;

```c
char c = 'A';
int x = c;
```

`x` vaut `65`.

### Cast explicite

```c
double x = 3.9;
int y = (int)x;
```

y vaut 3.
On n'arrondit pas. On tronque.

### Promotions automatiques

```c
char a = 10;
char b = 20;
int c = a + b; // a et b sont promus en int avant l'addition
```

Il est important de connaître ce que fait le compilateur dans les expressions.

## 10. Différence entre type et représentation mémoire

```c
int x = 65;
char c = 65;
```

Les deux valent "65" mais :
- int prend plus de place mémoire
- char prend un octet
- si on affiche c avec `%c` via `printf()`, on verra A

L'interprétation dépend du type et du format d'affichage

## 11. Les bons specificateurs printf

- char comme caractére : `%c`
- int : `%d`
- unsigned int : `%u`
- long : `%ld`
- long long : `%lld`
- float / double : `%f`
- taille de sizeof (size_t) : `%zu`
## 12. Pièges

### Division entière

```c
int a = 5 / 2;
printf("%d\n", a);
// Résultat 2 car 5 et 2 sont des int, donc la division est entière
```

```c
double a = 5.0 / 2.0;
double a = (double)5 / 2;
// Là on obtient 2.5
```

### Débordement

```c
char c = 127;
c = c + 1;
```

### Mélange signed / unsigned

```c
int a = -1;
unsigned int b = 1;

if (a < b)
	printf("a est plus petit \n");
else
	printf("Surprise \n");
// Le résultat peut être contre intuitif car a peut être convertie en unsigned
```

## 13. Les types dérivés

### 13.1 Pointeurs

```c
x = 42;
int *p = &x;
// p est un pointeur vers un int
// Le type du pointeur dépend de ce qu'il pointe
```

### 13.2 Tableaux

```c
int tab[5]; // Tableau de 5 int
char str[10]; // Tableau de 10 char
```

### 13.3 Structures

```c
struct s_point
{
	int x;
	int y;
}
// Une structure regroupe plusieurs données
```

### 13.4 typedef

Permet de créer un alias

```c
typedef unsigned long t_ulong;
```

```c
t_ulong n = 42;
// Ne crée pas un nouveau type fondamental mais juste un alias
```

## Types utiles à maitriser

- `char`
- `int`
- `unsigned int`
- `double`
- `void`
- `int *`
- `char *`

## 14.  Exercice

### 14.1 Exercice 1

```c
char a = 'B';
int b = 42;
double c = 3.5;
unsigned int d = 12;
```

- Lequel contient un caractère ?
- Lequel peut contenir une valeur négative ?
- Lequel contient un nombre à virgule ?
- Lequel ne peut pas contenir -1 normalement ?

### 14.2

Prédire l'affichage de 
```c
char c = 'A';
printf("%c\n", c);
printf("%d\n", c)
```
