#include <stdio.h>
#include <math.h>

int main() {
    double base, exp, result;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exp);
    result = pow(base, exp);
    printf("%.2lf^%.2lf = %.2lf\n", base, exp, result);
    return 0;
}
