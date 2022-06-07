#include <stdio.h>

int main()
{
	char alpha[] = "abcd";
	char *pa;

	pa = alpha;
	printf("%p\n", pa);
	printf("%p\n", pa + 1); // 1 = adds 1 byte to address because "char" has 1 bytes

	return (0);
}
