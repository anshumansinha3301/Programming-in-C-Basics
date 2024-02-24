#include<stdio.h>
int main(){
    int x;
    printf("enter an integer: ");
    scanf("%d", &x);

    if(x>=0) printf("%d", x);
    if(x< 0) 
    x = x*(-1); //formula for changing negative into positive
    printf("the absolute value of x is %d", x);
    return 0;
}
