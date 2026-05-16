#include <stdio.h>

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
			printf("G");
			good++;
		}
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
	char	guess[6];
	char	word[6] = "apple";
	int		attempts;

	attempts = 0;
	while (attempts < 5)
	{
		printf("Essai %d/5 — veuillez saisir un mot :\n", attempts + 1);
		scanf("%5s", guess);

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
