#include<stdio.h>

int main(){
    int x;
    printf("enter first number: ");
    scanf("%d", &x);

    int y;
    printf("enter second number: ");
    scanf("%d", &y);

    int z = (x + y);
    printf("the sum of two number is: %d", z);
    return 0;
}