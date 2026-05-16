#include <stdio.h>

int	ft_strlen(char str[])
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char toUpper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int	contains_char(char word[], char c)
{
	int	i;
	i = 0;
	while (word[i])
	{
		if (word[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_word(char word[], char guess[])
{
	int	i;
	int	good;

	i = 0;
	good = 0;
	while (word[i])
	{
		if (word[i] == guess[i])
		{
			printf("%c", toUpper(word[i]));
			good++;
		}
		else if(contains_char(word, guess[i]))
			printf("%c", guess[i]);
		else
			printf(".");
		i++;
	}
	printf("\n");
	if (good == 5)
		return (1);
	return (0);
}

int	main(void)
{
	char	guess[100];
	char	word[6] = "apple";
	int		attempts;

	attempts = 0;
	while (attempts < 5)
	{
		printf("Essai %d/5 — veuillez saisir un mot :\n", attempts + 1);
		scanf("%99s", guess);

		if (ft_strlen(guess) != 5)
		{
			printf("Le mot doit faire exactement 5 lettres.\n");
			continue;
		}

		if (check_word(word, guess))
		{
			printf("Victoire !\n");
			return (0);
		}

		attempts++;
	}
	printf("Perdu. Le mot était : %s\n", word);
	return (0);
}
