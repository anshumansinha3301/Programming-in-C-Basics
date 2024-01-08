#include <stdio.h>

// Function to reverse the digits of an integer
int reverseDigits(int number) {
    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number = number / 10;}
    return reversedNumber;}
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    int reversedNum = reverseDigits(num);
    printf("Reversed integer: %d\n", reversedNum);
    return 0;}