#include <stdio.h>

int isSame(char word1[], char word2[])
{
	int i;
	i = 0;
	while (word1[i]) {
		if (word1[i] != word2[i])
		{
			printf("loose\n");
			return (0);
		}
		i++;
	}
	printf("win\n");
	return (0);
}

int main(void)
{
	char guess[6];
	char word[6] = "apple";
	
	printf("Veuillez saisir un mot :\n");
	scanf("%5s", guess);
	return (isSame(word, guess));
}
