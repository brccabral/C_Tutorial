#include <stdio.h>

int main()
{
	int ch1, ch2, ch3, ch4;

	printf("Type a character: ");
	ch1 = getchar();
	printf("Type a character: ");
	ch2 = getchar();
	printf("Type a character: ");
	ch3 = getchar();
	printf("Type a character: ");
	ch4 = getchar();
	printf("Characters '%c', '%c', '%c', '%c' received.\n", ch1, ch2, ch3, ch4);

	return (0);
}
