#include <stdio.h>
#include <string.h>

int main()
{
	char r[] = "red";
	char g[] = "green";
	char b[] = "blue";

	// 0 is exact match
	// positive/negative is alphabetical order
	if (strcmp(r, "blue") == 0)
		printf("%s compares with \"blue\"\n", r);
	if (strcmp(g, "blue") == 0)
		printf("%s compares with \"blue\"\n", g);
	if (strcmp(b, "blue") == 0)
		printf("%s compares with \"blue\"\n", b);

	return (0);
}
