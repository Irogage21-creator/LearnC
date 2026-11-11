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

/*                ┌───────────────────┐
                  │       START       │
                  └─────────┬─────────┘
                            |
                            v
                  ┌───────────────────┐
                  │    main()         │
                  │                   │
                  │ Declare int num   │
                  └─────────┬─────────┘
                            |
                            v
                  ╱───────────────────╲
                 ╱    Enter number     ╲
                 ╲      (scanf)        ╱
                  ╲─────────┬─────────╱
                            |
                            v
                  ┌───────────────────┐
                  │  Call armstrong() │
                  │    armstrong(num) │
                  └─────────┬─────────┘
                            |
                            v
       ┌────────────────────────────────────────┐
       │             armstrong()                 │
       │                                        │
       │  Initialize variables:                 │
       │  remainder = 0                         │
       │  original = num                        │
       │  sum = 0                               │
       │  digits = 0                            │
       │  number = num                           │
       └───────────────────┬────────────────────┘
                           |
                           v
                  ◇─────────────────◇
                 ◇    num > 0 ?      ◇
                  ◇────────┬────────◇
                      YES  |  NO
                       |   | 
                       v   | 
              ┌───────────────────┐
              │ num = num / 10    │
              │ digits++          │
              └─────────┬─────────┘
                        |
                        └───────────────┐
                                        |
                              Back to num > 0
                                        |
                         NO <───────────┘
                         |
                         v
                ◇────────────────────◇
               ◇   original > 0 ?    ◇
                ◇─────────┬──────────◇
                      YES | NO
                       |  |
                       v  |
              ┌─────────────────────┐
              │ remainder =         │
              │ original % 10       │
              └──────────┬──────────┘
                         |
                         v
              ┌─────────────────────┐
              │ power = 1           │
              └──────────┬──────────┘
                         |
                         v
                ◇──────────────────◇
               ◇   i <= digits ?   ◇
                ◇────────┬─────────◇
                     YES | NO
                      |  |
                      v  |
              ┌─────────────────────┐
              │ power = power *     │
              │ remainder           │
              │                     │
              │ i++                 │
              └──────────┬──────────┘
                         |
                         └──────────────┐
                                        |
                              Back to i <= digits
                                        |
                          NO <──────────┘
                          |
                          v
              ┌─────────────────────┐
              │ sum = sum + power   │
              │                     │
              │ original =          │
              │ original / 10       │
              └──────────┬──────────┘
                         |
                         └──────────────┐
                                        |
                              Back to original > 0
                                        |
                         NO <───────────┘
                         |
                         v
                ◇────────────────────◇
               ◇   sum == number ?   ◇
                ◇─────────┬──────────◇
                      YES | NO
                       |  |
                       v  v
                ┌──────────┐  ┌──────────┐
                │ return   │  │ return   │
                │ true     │  │ false    │
                └────┬─────┘  └────┬─────┘
                     |             |
                     └──────┬──────┘
                            |
                            v
                 ┌────────────────────┐
                 │ Back to main()     │
                 │ Store in result    │
                 └──────────┬─────────┘
                            |
                            v
                    ◇──────────────◇
                   ◇   result ?    ◇
                    ◇──────┬───────◇
                       YES | NO
                        |  |
                        v  v
                ┌──────────────┐ ┌────────────────┐
                │ Print        │ │ Print          │
                │ Armstrong    │ │ Not Armstrong  │
                └──────┬───────┘ └───────┬────────┘
                       |                 |
                       └────────┬────────┘
                                |
                                v
                       ┌────────────────┐
                       │      END       │
                       └────────────────┘*/