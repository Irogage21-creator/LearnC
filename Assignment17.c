// Assignment  : A program to find the Sum of Digits of a Number.

#include<stdio.h>

int main(){

    int num;
    int digits = 0;

    printf("Enter your number : ");
    scanf("%d", &num);

    while(num > 0){
        num = num / 10;
        digits++;
    }

    printf("The total no. of digits in this Number is : %d", digits);

    return 0;
}