//Assignment : Write a c program to print a 3 digit no in reverse order without using loop. 

#include<stdio.h>

int main(){

    int n;
    printf("Enter your number : ");
    scanf("%d",&n);//let 123

    printf("Inversion : ");
    printf("%d", n%10);//print 3
    
    n = n / 10; //n = 12

    printf("%d%d", n%10, n/10);//print 2 and 1

    return 0;
}