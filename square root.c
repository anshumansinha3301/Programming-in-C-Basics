#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the square root
    squareRoot = sqrt(number);

    // Display the result
    printf("Square root of %.2lf = %.2lf\n", number, squareRoot);

    return 0;
}