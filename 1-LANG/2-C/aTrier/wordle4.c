#include <stdio.h>

void check_word(char word1[], char word2[])
{
	int i;
	i = 0;
	while (word1[i] && word2[i]) {
		if (word1[i] == word2[i])
			printf("G");
		else
			printf(".");
		i++;
	}
	printf("\n");
}

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
