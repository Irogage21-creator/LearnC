//Assignment : Check whether a year is leap year or not

#include<stdio.h>

int main(){

    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if((year%400 == 0)||(year%4 == 0 && year%100 != 0)){
        printf("This is a Leap Year\n");
    }
    else{printf("This is not a Leap year\n");}

    return 0;}