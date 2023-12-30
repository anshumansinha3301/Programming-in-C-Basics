#include<stdio.h>

int main(){
    // prt/100 = SI
    float principle;
    printf("enter principle: ");
    scanf("%f", &principle);
    float rate;
    printf("enter rate of interest: ");
    scanf("%f", &rate);
    float time;
    printf("Enter time: ");
    scanf("%f", &time);
    float si = principle*rate*time/100;
    printf("%f", si);    
    return 0;

}