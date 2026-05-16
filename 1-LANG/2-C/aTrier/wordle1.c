#include "stdio.h"

int main(void)
{
	char guess[6];
	char word[6] = "apple";
	int i;
	i = 0;
	printf("Veuillez saisir un mot :\n");
	scanf("%5s", guess);
	while (guess[i]) {
		if (guess[i] != word[i])
		{
			printf("loose");
			return (0);
		}
		i++;
	}
	printf("win\n");
	
	return (0);
}
