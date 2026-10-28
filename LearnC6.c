//Assignment 

#include<stdio.h>

int main(){

//Swapping two numbers :

    //Method 1 : using 3rd variables :

    int a = 10;
    int b = 20;
    int temp ;

    printf("The value of a is %d, and b is %d.\n", a,b);

    temp = a;/*Very important*/
    a = b;
    b = temp;
    
    printf("The new value after swapping of a is %d, and b is %d.\n\n", a,b);

    //Method 2 : without using 3rd variable (+ & -) :

    int a1 = 20;
    int b1 = 30;

    printf("The value of a is %d, and b is %d.\n", a1,b1);

    a1 = a1+b1;
    b1 = a1-b1;
    a1 = a1-b1;
    
    printf("The new value after swapping of a is %d, and b is %d.\n\n", a1,b1);

    //Method 3 : without using 3rd variable (* & /) :

    int a2 = 10;
    int b2 = 30;

    printf("The value of a is %d, and b is %d.\n", a2,b2);

    a2 = a2*b2;
    b2 = a2/b2;
    a2 = a2/b2;
    
    printf("The new value after swapping of a is %d, and b is %d.\n\n", a2,b2);

    //Method 4 : without using 3rd variable (using bitwise) :

    int a3 = 20;
    int b3 = 40;

    printf("The value of a is %d, and b is %d.\n", a2,b2);

    a3 = a3^b3;
    b3 = a3^b3;
    a3 = a3^b3;
    
    printf("The new value after swapping of a is %d, and b is %d.\n\n", a3,b3);
    

return 0;
}
