#include <stdio.h> // I select my C library

int main(void) // Open my main function
{
    int num, Reverse = 0;

    printf("Enter a two digit number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        Reverse = Reverse * 10 + num % 10;
        num = num / 10;
    }

    printf("The reversal is: %d", Reverse);
    return 0;
}