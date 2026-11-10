//Assignment : check whether a no. is positive or not :

#include<stdio.h>

int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n > 0){

        printf("Your Number is positive , which is %d",n);
    }
    else if(n < 0){printf("The number is negative!!");}
    else if(n == 0){printf("The number is 0!!");}

    return 0;
}