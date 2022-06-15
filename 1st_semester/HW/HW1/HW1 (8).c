#include <stdio.h>

int main(void)
{
    int a, b, c, d;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
        printf("Largest: %d\n", a);

    if (b > a && b > c && b > d)
        printf("Largest: %d\n", b);

    if (c > a && c > b && c > d)
        printf("Largest: %d\n", c);

    if (d > a && d > c && d > b)
        printf("Largest: %d\n", d);

    //Now thhe smallest
    if (a < b && a < c && a < d)
        printf("Smallest: %d", a);

    if (b < a && b < c && b < d)
        printf("Smallest: %d", b);

    if (c < a && c < b && c < d)
        printf("Smallest: %d", c);

    if (d < a && d < c && d < b)
        printf("Smallest: %d", d);
    return 0;
}