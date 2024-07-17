#include <stdio.h>
  
int main() {
    int n, triangularNumber;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    triangularNumber = n * (n + 1) / 2;
    printf("The %dth triangular number is: %d\n", n, triangularNumber);
    return 0;
}
