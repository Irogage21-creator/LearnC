// Assignment : A program to find the Sum of Digits of a Number.

#include<stdio.h>

int sumdigits(int num){

    int remainder = 0;
    int sum = 0;

    while(num > 0){
        remainder = num % 10;
        sum += remainder;
        num = num / 10;}
        /*| Iteration | `num % 10` (remainder) | `sum` | `num / 10` (updated num) |
          | 1         | 5                      | 5     | 1234                     |
          | 2         | 4                      | 9     | 123                      |
          | 3         | 3                      | 12    | 12                       |
          | 4         | 2                      | 14    | 1                        |
          | 5         | 1                      | 15    | 0                        |*/
        return sum;
}
int main(){

    int num;
    printf("Enter your number : ");
    scanf("%d", &num);

    int result = sumdigits(num);

    printf("The sum of digits of the no. %d is : %d", num , result);

    return 0;
}

/*        ┌───────────────┐
          │     START     │
          └───────┬───────┘
                  │
                  ▼
       ┌─────────────────────┐
       │ Declare integer num │
       └──────────┬──────────┘
                  │
                  ▼
       ┌─────────────────────┐
       │  Enter a number     │
       │  scanf("%d",&num)   │
       └──────────┬──────────┘
                  │
                  ▼
       ┌─────────────────────┐
       │ Call sumdigits(num) │
       │ result = sumdigits()│
       └──────────┬──────────┘
                  │
                  ▼
       ┌─────────────────────┐
       │ Function executes   │
       │ digit-summing logic │
       └──────────┬──────────┘
                  │
                  ▼
       ┌─────────────────────┐
       │ Return sum to main()│
       └──────────┬──────────┘
                  │
                  ▼
       ┌─────────────────────┐
       │ Print the result    │
       └──────────┬──────────┘
                  │
                  ▼
          ┌───────────────┐
          │      END      │
          └───────────────┘*/