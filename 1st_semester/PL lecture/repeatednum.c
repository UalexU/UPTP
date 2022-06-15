#include <stdio.h>
#define N 10
int main(void)
{
    int digit_seen[N] = {0};
    int n, digit, i, repeat = 0;
    printf("Enter your number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (digit_seen[i] > 1)
        {
            printf("Repeated digit %d: %d\n", i, digit_seen[i]);
            repeat = 1;
        }
    }
    if (repeat == 0)
        printf("No repeated digit\n");
    ;

    return 0;
}