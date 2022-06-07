#include <stdio.h>

int main()
{
	char input[10];

	printf("Your name? ");
	fgets(input, 10, stdin); // reads after whitespace, don't overflow, but reads \n
	printf("Pleased to meet you, %s!\n", input);

	return (0);
}
