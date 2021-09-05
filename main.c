#include <stdio.h>

int main() {
    double fahrenheit_01;
    printf("\nEnter the fahrenheit: ");
    scanf_s("%lf", &fahrenheit_01);

    double celsius_01 = (fahrenheit_01 - 32) * 5/9;
    printf("\nFahrenheit ----> Celsius: %.2lf", celsius_01);

    double celsius_02;
    printf("\nEnter the celsius: ");
    scanf_s("%lf", &celsius_02);

    double fahrenheit_02 = (celsius_02 * 9/5) + 32;
    printf("\nCelsius ----> Fahrenheit: %.2lf", fahrenheit_02);

    return 0;
}
