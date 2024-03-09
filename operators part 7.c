#include<stdio.h>
int main(){
    int x = 5;
    int y = 8;
// pre increment and post increment
    printf("%d\n", x);
    printf("%d\n", x++); // first work then add
    printf("%d\n",x);

    printf("%d\n", y);
    printf("%d\n", ++y); // first add then work
    printf("%d\n",y);
    
    return 0;
}
