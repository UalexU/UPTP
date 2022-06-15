#include <stdio.h>
#define initialBalance 100                                  // Initial balance of money
#define num_rates ((int)(sizeof(value) / sizeof(value[0]))) // Divides arraey size 5 = 20 bites with int value 0 = 4 bites = 5
int main(void)
{
    int i, interest, years, n;
    double value[5]; // arrey with decimals
    printf("Enter interest rate: ");
    scanf("%d", &interest);
    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("\nYears");
    for (i = 0; i < num_rates; i++)
    {
        printf("%6d%%", interest + i); // I write down the rate and increase it by one each time
        value[i] = initialBalance;     // Save the initialBalance = 100 to each index of my arrey
    }
    printf("\n");

    for (n = 1; n <= years; n++)
    {
        printf("%3d     ", n);
        for (i = 0; i < num_rates; i++)
        {
            value[i] += ((interest + i) / (100.00) * value[i]);
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}