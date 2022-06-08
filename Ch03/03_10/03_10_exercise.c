#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p[10];
    char buffer[32];

    int x;
    for (x = 0; x < 10; x++)
    {
        printf("Write something (32 characters): ");
        scanf("%s", buffer);

        p[x] = (char *)malloc(strlen(buffer) + 1);
        if (p[x] == NULL)
        {
            puts("Unable to allocate storage");
            exit(1);
        }
        strcpy(p[x], buffer);
    }

    for (x = 0; x < 10; x++)
    {
        printf("%2d %10s\n", x, p[x]);
    }

    return (0);
}