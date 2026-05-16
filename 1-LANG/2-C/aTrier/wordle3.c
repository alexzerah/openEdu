#include <stdio.h>

void check_word(char word1[], char word2[])
{
	int i;
	i = 0;
	while (word1[i]) {
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
	
	printf("Veuillez saisir un mot :\n");
	scanf("%5s", guess);
	isSame(word, guess);
	
	return (0);
}
