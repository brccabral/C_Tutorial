#include <stdio.h>

int main()
{
	int a;

	while (1)
	{
		a = getchar();
		if (a == EOF) // EOF = Ctrl + D (done) (Ctrl + C is interruption)
			break;
		putchar(a);
	};

	return (0);
}
