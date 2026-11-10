//Assignment : Checking a number is Prime or not

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isprime(int n);

int main(){

    int n ;
    printf("Enter your number : ");
    scanf("%d", &n);


    if(isprime(n)){printf("The no. %d is PRIME", n);}
    else {printf("The no. %d is NOT PRIME", n);}

    return 0;
}
bool isprime(int n){

    if(n <= 1){return false;}
    else if(n == 2){return true;}
    else if(n%2 == 0){return false;}

    int limit = (int)sqrt(n);

    for(int i = 3; i <= limit ; i += 2){
        if(n%i == 0){
            return false; //this will indicate that the no. is not prime
        }
        
    }
    
    return true;
}

