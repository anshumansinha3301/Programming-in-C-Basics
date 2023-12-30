/* The distance between two cities (in km) is input through the keyboard, write a program to convert
and print this distance in meters, feet, inches and centimetres. */
#include <stdio.h>

int main() {
    double distanceInKm;

    // Input the distance in kilometers
    printf("Enter the distance between two cities (in kilometers): ");
    scanf("%lf", &distanceInKm);

    // Conversion factors
    double meters = distanceInKm * 1000;
    double feet = distanceInKm * 3280.84;
    double inches = distanceInKm * 39370.1;
    double centimeters = distanceInKm * 100000;

    // Display the converted distances
    printf("Distance in meters: %.2lf\n", meters);
    printf("Distance in feet: %.2lf\n", feet);
    printf("Distance in inches: %.2lf\n", inches);
    printf("Distance in centimeters: %.2lf\n", centimeters);

    return 0;
}
