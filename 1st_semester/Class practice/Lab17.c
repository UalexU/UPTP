// #include <stdio.h>
// #define N 10
// int find_smaller();

// int main(void)
// {
//     int a[N] = {2, 12, 41, 23, 1, 123, 5, 34, 3, 19};
//     printf("This is the smallest number: %d", find_smaller(a[N], N));
//     return 0;
// }

// int find_smaller(int a[], int n)
// {
//     int i = 0;
//     int min = a[0];
//     for (i = 0; i < n; i++)
//     {
//         if (a[i] < min)
//             min = a[i];
//     }
//     return min;
// }
////////////////////////////////////////
#include <stdio.h>
int check();
int main(void)
{
    printf("%d", check(1, 3, 7));
    return 0;
}

int check(x, y, n)
{
    if (x <= n - 1 && y <= n - 1 && x >= 0 && y >= 0)
        return 1;
    else
        return 0;
}