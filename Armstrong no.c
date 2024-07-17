#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0, temp, remainder, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
