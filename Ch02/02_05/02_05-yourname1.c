#include <stdio.h>

int main()
{
	char input[10];

	printf("Your name? ");
	scanf("%s", input); // stops reading at whitespace, can overflow if more than 9 chars are given
	printf("Pleased to meet you, %s!\n", input);

	return (0);
}
