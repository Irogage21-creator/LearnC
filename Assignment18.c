//Assignment : A program to print the Fibonacci Series.

#include<stdio.h>

void fibonacci(int terms){

    long long n = 0;
    long long t = 1;
    long long result = 0;

    for(int i = 0 ; i < (terms - 2)  ; i++){
        result = n + t;
        printf(" , %lld", result);
        n = t;
        t = result;
    }
}

int main(){

    int terms = 0;

    printf("How many terms do you want in your fibonacci series : ");
    scanf("%d", &terms);

    if(terms == 1){printf("Fibonacci series upto 1 terms : 0");}
    else if(terms == 2){printf("Fibonacci series upto 2 terms : 0 , 1");}
    else if(terms >= 3){printf("Fibonacci series upto %d terms : 0 , 1",terms );
                       fibonacci(terms);}
    else{printf("INVALID INPUT!!!!");}

    return 0;
}
/*
                    FLOWCHART
                        |
                      START
                        |
                        v
                Enter main() function
                        |
                        v
                Initialize terms = 0
                        |
                        v
                Input number of terms
                        |
                        v
                Check: terms == 1 ?
                   /          \
                 YES           NO
                  |             |
                  v             v
           Print only 0    Check: terms == 2 ?
                              /        \
                            YES         NO
                             |           |
                             v           v
                     Print 0, 1    Check: terms >= 3 ?
                                     /        \
                                   YES         NO
                                    |           |
                                    v           v
                            Print 0, 1    Print invalid
                                    |       input message
                                    v
                           Call fibbonacci()
                                    |
                                    v
                         Initialize n = 0,
                         t = 1, result = 0
                                    |
                                    v
                         Check: i < terms - 2
                              /          \
                            YES           NO
                             |             |
                             v             v
                     result = n + t    Return from
                             |          function
                             v             |
                      Print result         |
                             |             |
                             v             |
                         n = t              |
                             |             |
                             v             |
                       t = result           |
                             |             |
                             v             |
                         Increment i        |
                             |             |
                             +----->-------+
                                           |
                                           v
                                      return 0
                                           |
                                           v
                                          END
*/