 //Assignment : A program which reverses a number : 

#include<stdio.h>

int numreverse(int num){
    int remainder = 0;
    int reverse = 0;
    
    printf("Reverse of the number %d will be : ", num);
    
    while(num > 0){                  
        //   | Iteration | num % 10 (remainder)   | num / 10 (new num)   | reverse * 10 + remainder   |
        //   | 1         | 6                      | 12345                | 6                          |
        //   | 2         | 5                      | 1234                 | 65                         |
        //   | 3         | 4                      | 123                  | 654                        |
        //   | 4         | 3                      | 12                   | 6543                       |
        //   | 5         | 2                      | 1                    | 65432                      |
        //   | 6         | 1                      | 0                    | 654321                     |
    
    remainder = num % 10;
    num = num / 10;
    reverse = reverse*10 + remainder;}
    printf("%d", reverse);

    return reverse;

}

int main(){

    int num = 0;
    printf("Enter your Positive no. : ");
    scanf("%d", &num);

    if(num > 0){numreverse(num);}
    else{printf("INVALID INPUT");}

    return 0;
}