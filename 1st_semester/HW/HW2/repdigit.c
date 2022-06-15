#include <stdio.h>
#define size 10
int main()
{
    int digit_seen[size] = {0};
    void Digit_num(int a[]);
    int digit, n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }
    Digit_num(digit_seen);
    return 0;
}

void Digit_num(int a[])
{
    int i;
    printf("Digit:       ");
    for (i = 0; i < size; i++)
    {
        printf("  %d", i);
    }

    printf("\nOcurrences:  ");
    for (i = 0; i < size; i++)
    {
        printf("  %d", a[i]);
    }
}
