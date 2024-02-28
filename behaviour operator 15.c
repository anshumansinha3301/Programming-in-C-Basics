#include<stdio.h>
int main(){
    float a = 5;
    float b = 2;
    float x = a/b; // here float/float = float
    printf("%f", x);
    return 0;
}
/* if we did float x = 5/2 and did printf("%f", x); the answer would be 2.000 
because in float x = 5/2 [2 is considered an integer] so the answer does  not came 
as float*/

/*float/float = float
int/int = int 
float/int = float 
int/float = float*/
