#include <stdio.h> // Add the stdio.h library to make it work
#include <stdlib.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (9.0f / 5.0f) // We need to make the compiler interpret the scale factor as a float

int main(void)
{
    float farenheit, celcius;
    printf("Enter celcius temperature: ");
    scanf("%f", &celcius);

    farenheit = (celcius * SCALE_FACTOR) + FREEZING_PT;

    printf("Fahrenheit equivalent: %.lf", farenheit);

    return 0;
}