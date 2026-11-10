//Assignment : Check Pass or Fail

#include<stdio.h>

int main(){

    int n;
    printf("Enter your marks : ");
    scanf("%d", &n);

    if(n >= 40){printf("You Have Passed the Exam!!");}
    else{printf("You Have Failed the Exam!!");}

    return 0;}