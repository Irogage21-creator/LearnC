//Assignment : Finding the Factorial of a number

#include<stdio.h>

int factorial(int n){

    int fact = 1;

    for(int i = 1 ; i <= n ; i++){

        fact = fact*i;
    }
    return fact;
}

int main(){

    int n;
    printf("Enter your number N : ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("The value of factorial of %d is : %d", n , result);

    return 0;
}