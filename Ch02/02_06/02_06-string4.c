#include <stdio.h>

int main()
{
	char string[] = "I'm such a handsome program!\n";
	int a;

	a = 0;
	// putchar prints and returns the char
	// null char \0 is resolved to false, breaking the loop
	// a++ is resolved after the statement
	while (putchar(string[a++]))
		;

	return (0);
}
