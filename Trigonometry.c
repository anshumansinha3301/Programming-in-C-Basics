#include <stdio.h>
#include <math.h>
int main() {
    double angle;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    double angleInRadians = angle * (M_PI / 180.0);

    printf("Sine of %.2lf degrees: %.4lf\n", angle, sin(angleInRadians));
    printf("Cosine of %.2lf degrees: %.4lf\n", angle, cos(angleInRadians));

    if (cos(angleInRadians) == 0) {
        printf("Tangent is undefined for %.2lf degrees\n", angle);
    } else {
        printf("Tangent of %.2lf degrees: %.4lf\n", angle, tan(angleInRadians));
    }

    return 0;
}
