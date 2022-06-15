#include <stdio.h>
int Final(int n)
{
    int remanent;
    if (n > 0)
    {
        remanent = n % 10;
        printf("%d", remanent);
        Final(n / 10);
    }
    else
        return 0;
}

int main(void)
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    printf("This is the reverse: ");
    Final(num);
    return 0;
}
