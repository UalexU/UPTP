#include <stdio.h>
int main(void)
{
    int a[] = {6, 16, 35, 55, 15, 3, 54, 73};
    int *p = &a[1], /*Equal to 16*/ *q = &a[5] /* Equal to 3*/;
    printf("%d\n", *(p + 3));                                                   // Same as a[4]
    printf("%p\n", q - p);                                                      // Equal to 00000004
    (p == q) ? printf("It's equal\n") : printf("Not equal\n");                   //false
    (*p > *q) ? printf("*p greater than *q") : printf("*p is smaller than *q"); // true
    return 0;
}
