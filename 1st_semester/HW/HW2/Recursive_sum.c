#include <stdio.h>
int recursive(); // Prototype, declares the compiler to let it know that the function may be used later
int main(void)
{
    int n, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    printf("Your sum was: %d", recursive(n));
    return 0;
}
int recursive(int n)
{
    int sum = 0;
    if (n != 0)
        sum += (n % 10) + recursive(n / 10);
    else
        return sum;
}       



