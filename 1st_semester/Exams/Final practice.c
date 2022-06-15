#include <stdio.h>
#include <stdbool.h>
#include <time.h>
// int num_digit(int n, int dig)
// {
//     if (n == 0)
//         return dig;
//     else
//         dig += n % 10;
//         num_digit(n / 10, dig);
// }
// int main(void)
// {
//     int num, digits;
//     printf("This is your number %d: with %d digits", num, num_digit(num, digits));
// }
//////////ARREY/POINNTER SUMM////////
// #define N 10
// int main(void)
// {
//     int a[N] = {0, 2, 3, 5, 22, 62, 32, 52, 12, 5}, sum, *p;
//     sum = 0;
//     for (p = &a[0]; p < &a[N]; p++)
//         sum += *p; // ADD THE VALUE OF P
//     printf("%d", sum);
// }
//////////FIND SMALLEST///////
// #define N 10
// int *find_smallest(int a[], int n)
// {
//     int min, i, j;
//     for (i = 0; i < n; i++)
//         if (a[i] < min)
//         {
//             min = a[i];
//             j = i;
//         }
//     return &a[j];
// }
// int main(void)
// {
//     int array[N] = {3, 23, 6, 423, 21, 32, 1, 3, 9, 10};
//     printf("The smallest number is; %d", *find_smallest(array[N], N));
//     return 0;
// }
////Reverse V3///////////
// #define N 10
// int main(void)
// {
// int a[N], *p;
// printf("Enter %d numbers: ", N);
// for (p = a; p < a + N; p++)
// scanf("%d", p);
// printf("In reverse order:");
// /*for (i=N-1; i>=0; i--) */
// for (p = a + N - 1; p >= a; p--)
// printf(" %d", *p);
// printf("\n");
// return 0;
// }
#define SIZE 5

int last_exercise(int a[], int b[], int n);

int main(void)
{
    int a[SIZE] = {6, 3, 5, 4, 2};
    int b[SIZE] = {8, 9, 3, 23, 6};

    printf("The sum is %d", last_exercise(a, b, SIZE));

    return 0;
}

int last_exercise(int a[], int b[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += a[i] * b[i];

    return sum;
}