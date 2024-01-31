// take integer x as input and print half of the number
#include<stdio.h>

int main(){
    int x;
    printf("enter a number: ");
    scanf("%d", &x );
    // typecasting process below
    float f = (float)x;
    printf("%f", f/2); // here x got typecasted from int to float
    return 0;
}
