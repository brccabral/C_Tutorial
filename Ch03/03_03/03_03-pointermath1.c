#include <stdio.h>

int main()
{
	int alpha;
	int *pa;

	pa = &alpha;
	printf("%p\n", pa);
	printf("%p\n", pa + 1); // 1 = adds 4 bytes to the address because "int" has 4 bytes

	return (0);
}
