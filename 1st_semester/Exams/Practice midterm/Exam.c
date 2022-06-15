#include <stdio.h>

int n, t1, t2, i;
int main()
{
    t1 = 0;
    t2 = 1;
    int next = t1 + t2;
    printf("Enter number of terms: ");

    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }

    return 0;
}
