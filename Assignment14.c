//Assignment : A program to check whether a number is a Palindrome.

#include<stdio.h>
#include<stdbool.h>

bool palindrome(int num){

    int remainder = 0;
    int reverse = 0;
    int original = num;
             

/*     User Input
           |
           v
   Store Original Number
           |
           v
    Extract Last Digit
           |
           v
    Remove Last Digit
           |
           v
  Construct Reverse Number
           |
           v
     Is num > 0?
       /     \
     Yes      No
      |        |
    Loop       v
          Compare Original
          and Reversed Number
                 |
           ┌─────┴─────┐
           v           v
         Equal      Not Equal
           |           |
           v           v
         True         False*/

        while(num > 0){remainder = num % 10;
        num = num / 10;
        reverse = reverse*10 + remainder;}
       
        if(reverse == original){return true;}
        else{return false;}
    }

int main(){

    int num;

    printf("Enter your number : ");
    scanf("%d", &num);

    bool result = palindrome(num);

    if(result){printf("This no. is a Palindrome!!");}
    else{printf("This no. is not a Palindrome!!");}

    return 0;
}
