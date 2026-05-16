# Worlde 2

- Vérifier si une lettre est bien placé

```c
void	check_word(char word[], char guess[])
{
	int	i;
	i = 0;
	while (word[i])
	{
		if (word[i] == guess[i])
			printf("G"); // Good : bonne lettre, bonne place
		else
			printf("."); // pas encore trouvé
		i++;
	}
	printf("\n");
}
```

## Ajustement

```c
// check_word
while (word1[i] && word2[i]) {
	// ...
}
```

## Mettre en place 5 essais

```c
int main(void)
{
	char guess[6];
	char word[6] = "apple";
	int attempts;

	attempts = 0;
	while (attempts < 5)
	{
		printf("Essai %d/5 — veuillez saisir un mot :\n", attempts + 1);
		scanf("%5s", guess);
		check_word(word, guess);
		attempts++;
	}
	
	return (0);
}
```

## Detecter la victoire

```c
// Check_word()
// Créer une variable int good.

int	i;
int	good;

i = 0;
good = 0;
```

```c
// Check_word()
if (word[i] == guess[i])
{
	printf("G");
	good++;
}
```

```c
// check_word()
printf("\n");
if (good == 5) // Uniquement pour les mots de 5 lettres
	return (1);
return (0);
```

```c
// main()
if (check_word(word, guess))
{
	printf("Victoire !\n");
	return (0);
}
```

```c
// main()
printf("Perdu. Le mot était : %s\n", word);
return (0);
```

## Améliorations

## Checker les lettres en doublons

```c
int	check_word(char word[], char guess[])

{

	int		i;
	int		j;
	int		good;
	int		used[5];
	char	result[6];
	i = 0;
	good = 0;
	while (i < 5)
	{
		used[i] = 0;
		result[i] = '.';
		i++;
	}
	result[5] = '\0';
	i = 0;
	while (i < 5)
	{
		if (guess[i] == word[i])
		{
			result[i] = toUpper(guess[i]);
			used[i] = 1;
			good++;
		}
		i++;
	}
	i = 0;
	while (i < 5)
	{
		if (result[i] == '.')
		{
			j = 0;
			while (j < 5)
			{
				if (!used[j] && guess[i] == word[j])
				{
					result[i] = guess[i];
					used[j] = 1;
					break;
				}
				j++;
			}
		}
		i++;
	}
	printf("%s\n", result);
	if (good == 5)
		return (1);
	return (0);
}
```
