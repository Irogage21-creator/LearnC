//Assignment : Swapping two numbers using a third variable

#include<stdio.h>

int main(){

//Swapping two numbers :

    int a = 10;
    int b = 20;
    int temp ;

    printf("The value of a is %d, and b is %d.\n", a,b);

    temp = a;/*Very important*/
    a = b;
    b = temp;
    
    printf("The new value after swapping of a is %d, and b is %d.\n\n", a,b);
    
    return 0;
}
