#include<stdio.h>
int main()    
    {int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    // using only if statement
    if(x>0) printf("Positive Number");
    if(x<0) printf("Negative Number");
    return 0;}