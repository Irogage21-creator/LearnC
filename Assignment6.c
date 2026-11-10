//Assignment : Checking voting eligibility 

#include<stdio.h>

int main(){

    int n;
    printf("Enter your Age : ");
    scanf("%d", &n);

    if(n >= 18){printf("Congrats!! your now eligible for votint .");}
    else{printf("Sorry your are not eligible for voting");}
    return 0;}