#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n >= 1 <= 10) // Esto es igual = (n>1) < 10
    {
        printf("n is between one and 10\n");
    }

    return 0;
}