// Assignment : A program to check whether a number is a Strong Number

#include<stdio.h>
#include<stdbool.h>

bool strN(int num){
    
    int originalnum , sum = 0 , digit = 0;

    originalnum = num;

    while(num > 0){

        digit = num % 10; //gives the last digit of the num

        int fact = 1;
        for( int i = 1 ; i <= digit ; i++){

            fact *= i;
        }
        sum += fact;
        num = num / 10;
    }

    return originalnum == sum;

}
int main(){

    int num; 

    printf("Enter your number : ");
    scanf("%d", &num);

    if(num < 0){
        printf("No negative no. is a Strong Number.");}
    else if(strN(num)){
        printf("The no. %d is a Strong Number!!", num);
    }
    else{
        printf("The no. %d is not a Strong Number!!", num);
    }
    
    return 0;
}
/*  main() function flow chart  
        ┌─────────────┐                                                             
        │    START    │
        └──────┬──────┘
               │
               ▼
        ┌─────────────┐
        │ Read num    │  (input from user)
        └──────┬──────┘
               │
               ▼
        ┌─────────────┐
        │ result =    │
        │ strN(num)   │  ──────────┐
        └──────┬──────┘            │
               │                   │  (jumps to function flowchart
               ▼                   │   in section 2, then returns)
        ┌─────────────┐            │
        │ result ==   │◄───────────┘
        │ true ?      │
        └──┬───────┬──┘
        Yes│       │No
           ▼       ▼
   ┌──────────┐ ┌──────────────┐
   │ Print    │ │ Print        │
   │ "Strong" │ │ "Not Strong" │
   └────┬─────┘ └──────┬───────┘
        │              │
        └──────┬───────┘
               ▼
        ┌─────────────┐
        │    STOP     │
        └─────────────┘*/

/*  strN(num) function flow chart 
        ┌─────────────┐
        │  strN(num)  │
        └──────┬──────┘
               │
               ▼
        ┌──────────────────┐
        │ original = num   │
        │ sum = 0          │
        └──────┬───────────┘
               │
               ▼
        ┌─────────────┐
        │  num < 0 ?  │
        └──┬───────┬──┘
        Yes│       │No
           ▼       │
     ┌──────────┐  │
     │ return   │  │
     │ false    │  │
     └──────────┘  │
                   ▼
            ┌──────────────┐
            │  num > 0 ?   │◄──────────────┐
            └──┬───────┬───┘               │
            Yes│       │No                 │
               ▼       │                   │
        ┌──────────────┐                   │
        │ digit =      │                   │
        │ num % 10     │                   │
        └──────┬───────┘                   │
               │                           │
               ▼                           │
        ┌──────────────┐                   │
        │ fact = 1     │                   │
        │ i = 1        │                   │
        └──────┬───────┘                   │
               │                           │
               ▼                           │
        ┌──────────────┐                   │
        │  i <= digit? │◄──────────┐       │
        └──┬───────┬───┘           │       │
        Yes│       │No             │       │
           ▼       │               │       │
    ┌───────────┐  │               │       │
    │ fact *= i │  │               │       │
    │ i++       │──┼───────────────┘       │
    └───────────┘  │                       │
                   ▼                       │
            ┌──────────────┐               │
            │ sum += fact  │               │
            └──────┬───────┘               │
                   │                       │
                   ▼                       │
            ┌──────────────┐               │
            │ num /= 10    │               │
            └──────┬───────┘               │
                   │                       │
                   └───────────────────────┘
                   │ (loop exits when num == 0)
                   ▼
            ┌──────────────┐
            │ return       │
            │ (original == │
            │  sum)        │
            └──────────────┘*/