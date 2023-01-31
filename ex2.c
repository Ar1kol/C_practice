#include <stdio.h>

float FahrenheitToCelsius(int fahrenheit);

int main()
{
    FahrenheitToCelsius(-146);
    return 0;
}

float FahrenheitToCelsius(int fahrenheit)
{
    float celsius = 0;

    celsius = (float)((fahrenheit - 32) * 5) / 9;
    // celsius = ((fahrenheit - 32) * 5.0) / 9;
    printf("%f", celsius);

    return celsius;
}