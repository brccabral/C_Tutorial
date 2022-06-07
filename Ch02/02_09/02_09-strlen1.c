#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "Hello, you happy planet.";
	size_t len;

	len = strlen(string);
	printf("The string \"%s\" is %lu characters long.\n", string, len);

	return (0);
}
