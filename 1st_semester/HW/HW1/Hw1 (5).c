#include <stdio.h>
// Made by Alex Villalba//
int main(void)
{
    int item, month, day, year;
    float price;
    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter your price: ");
    scanf("%f", &price);
    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%d\t%.2f\t%d/%d/%d", item, price, month, day, year);

    return 0;
}