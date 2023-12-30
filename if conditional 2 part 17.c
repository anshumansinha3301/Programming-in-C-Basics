// take positive integer input and tell if it is even or odd//
#include<stdio.h>

int main(){
    int x;
    printf("enter an integer: ");
    scanf("%d", &x);

    if(x % 2 == 0) printf("the number is even");//= means assignment operator and == is equality operator
    if(x % 2 != 0) printf("the number is odd");// != means not equal to
    return 0;
}