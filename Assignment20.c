// Assignment : A Program calculate the Power of a Number Without Using pow().

#include<stdio.h>

int powN(int a, int b){

    int power = 1;
        for(int i = 1; i <= b; i++){
        power = power * a;}

    return power;
}
int main(){

    int a = 0;
    int b = 0;

    printf("Enter the Base number 'N' : ");
    scanf("%d", &a);
    printf("Enter the Power of that number you want to raise 'r' : ");
    scanf("%d", &b);

    int result = powN(a,b);

    printf("The %d^%d : %d",a ,b, result);

    return 0;
}