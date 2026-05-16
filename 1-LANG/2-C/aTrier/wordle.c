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
