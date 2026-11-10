//Assignment : Find the maximum of three numbers

#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter your num1 :");
    scanf("%d",&a);
    printf("Enter your num2 :");
    scanf("%d",&b);
    printf("Enter your num3 :");
    scanf("%d",&c);

    if(a > b && a > c){
        printf("num1 %d is greatest among all three numbers", a);  
    }
    else if(b > a && b > c){
        printf("num2 %d is greatest among all three numbers", b);  
    }
    else{printf("num3 %d is greatest among all three numbers", c);  
    }

    return 0;}