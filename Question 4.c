/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program 
to convert this temperature into Centigrade degrees.*/
#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    // Display temperature in Celsius
    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}
