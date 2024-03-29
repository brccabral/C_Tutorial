#include <stdio.h>

int main()
{
	char string[] = "Deadly spiders!";

	puts("String displayed with %s:");
	printf("%s\n", string);
	puts("String displayed in a 24-character width:");
	printf("%24s\n", string);
	puts("24-character width, left-justified:");
	printf("%-24s\n", string);
	puts("24-character width, 6-character truncated:");
	printf("%24.6s\n", string); // prints only 6 chars in a 24 space (the rest is blank)
	puts("24-character width, 6-character truncated, left-justified:");
	printf("%-24.6s\n", string); // prints only 6 chars in a 24 space (the rest is blank)

	return (0);
}
