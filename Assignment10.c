//Assignment : Check whether a character is an Alphabet

#include<stdio.h>

int main(){

    char ch;
    printf("Enter your Character : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'||ch >= 'a' && ch <= 'z'){
        printf("Your Character is an alphabet %c", ch);
    }
    else{printf("Your Character is not an alphabet %c", ch);}

    return 0;}