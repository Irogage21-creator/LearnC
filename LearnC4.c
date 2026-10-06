// Lesson 4 : Arithmetic operators

// Arithmatic operators = + - * / % ++ --

#include<stdio.h>


int main(){


int x = 7; 
int y = 4;
float z = 3;
int a = x + y; // addition
int b = x - y; // subtraction
int c = x*y; // multiplication
float d = x/z; //division (in division, use float datatype in all the variables invloved)
int e = x % y; //modulus operator or say remainder operator

printf("%d \n", a);
printf("%d \n", b);
printf("%d \n", c);
printf("%f \n", d);// use %f 
printf("%d \n\n", e);


// Other than Arithmatic operators, we have ogmented operators too
// Here are some of them

int q = 2;//This is equals to q = q + 4
int p = 5;
int r = 8;
float u = 14;

q+=4; //This is equals to q = q + 4;
p-=3; //This is equals to p = p - 3;
r*=2; //This is equals to r = r*2;
u/=4; //this is equals to u = u/4;

printf("%d\n", q);
printf("%d\n", p);
printf("%d\n", r);
printf("%f\n", u);

    //Here Lesson 4 ends
    
    return 0;
}
