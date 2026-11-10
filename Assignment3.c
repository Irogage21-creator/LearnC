//Assignment : Swapping two numbers without using a third variable

#include<stdio.h>

void method1(int a, int b);
void method2(int a, int b);
void method3(int a, int b);

int main(){

    int a,b;

    printf("Enter A : ");scanf("%d", &a);
    printf("Enter B : ");scanf("%d", &b);
    printf("A = %d , B = %d\n", a, b);

    method1(a, b);//Method 1 : via Addition-subtraction operators
    method2(a, b);//Method 2 : via Multiplication-Division operators
    method3(a, b);//Method 3 : via XOR operator

    return 0;
}

void method1(int a, int b){

    a = a+b;
    b = a-b;
    a = a-b;

    printf("New A = %d , B = %d (Via Method 1)\n", a, b);
}
void method2(int a, int b){

    a = a*b;
    b = a/b;
    a = a/b;

    printf("New A = %d , B = %d (Via Method 2)\n", a, b);
}
void method3(int a, int b){

    a = a^b;
    b = a^b;
    a = a^b;

    printf("New A = %d , B = %d (Via Method 3)\n", a, b);
}
