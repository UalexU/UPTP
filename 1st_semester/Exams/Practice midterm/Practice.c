#include <stdio.h>

// int main(void)
// {
//     int n, sum = 0;
//     printf("This program sums numbers until you put a 0 input\n");
//     printf("Enter your integers: ");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         sum += n;
//         scanf("%d", &n);
//     }

//     printf("%d\n", sum);
//     return 0;
// }

// int main(void)
// {
//     int a, sum;
//     printf("Enter your number: ");
//     scanf("%d", &a);

//     while (a > 0)
//     {
//         sum += a;
//         if (a == 0)
//         {
//             break;
//         }
//     }
//     printf("The sum is: %d", sum);
//     return 0;
// }

int main()
{
    int n1, n2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d", n1);

    return 0;
}