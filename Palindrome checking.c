#include <stdio.h>

int main() {
    int num, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if(num == rev)
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);
    return 0;
}
