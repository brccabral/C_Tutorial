#include <stdio.h>

int main()
{
	char input[10];

	printf("Your name? ");
	scanf("%9s", input); // reads only 9 chars, but stops reading at whitespace
	printf("Pleased to meet you, %s!\n", input);

	return (0);
}
