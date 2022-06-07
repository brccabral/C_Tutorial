#include <stdio.h>

int main()
{
	double twos[5] = {2.2, 4.4, 6.6, 8.8, 10.1};
	double *pt;

	pt = twos;
	printf("%p\n", pt);
	printf("%p\n", pt + 1); // 1 = adds 8 bytes to the address because "double" has 4 bytes

	return (0);
}
