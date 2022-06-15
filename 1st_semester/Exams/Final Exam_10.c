#include <stdio.h>
#define N 4
int last_exercise(int a[], int b[], int n)
{
    int sum = 0, i;

    for (i = 0; i < N; i++)
    {
        sum += a[i] * b[i];
    }
    return sum;
}
int main(void)
{
    int a[N] = {1, 3, 5, 7};
    int b[N] = {2, 4, 6, 8};

    printf("The sum of the arreys is: %d", last_exercise(a, b, N));

    return 0;
}