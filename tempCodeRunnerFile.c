// Assignment : A program that checks that a given no. is an Armstrong no.

#include<stdio.h>
#include<stdbool.h>

bool armstrong(int num){
    
    int remainder = 0;
    int original = num;
    int sum = 0;
    int digits = 0;
    int number = num;
    int power = 0;

    while(num > 0){
        num = num / 10;
        digits++;
    }
    while(original > 0){
        remainder = original % 10;
        
        power = 1;
        for(int i = 1; i <= digits; i++){
        power = power * remainder;}

        sum += power;
        original = original / 10;}

        

    return sum == number;
}

int main(){

    int num;

    printf("Enter your number : ");
    scanf("%d", &num);

    bool result = armstrong(num);

    if(result){printf("This no. is an Armstrong!!");}
    else{printf("This no. is not an Armstrong!!");}


    return 0;
}