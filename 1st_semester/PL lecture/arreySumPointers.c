#include <stdio.h>
#define N 10
int main(void)
{
    int a[N], *p, sum;
    sum = 0;
    for (p = &a[0]; p < &a[N]; p++) // P = (value of that position)
    {
        sum += *p; // The pointers values are stored in sum
    }
}