// Assignment : A program to find the GCD (HCF) of Two Numbers.

#include<stdio.h>

int hcf(int n, int m){

    int remainder = 0;
    
    while(m > 0){
        remainder = n % m ;
        n = m;
        m = remainder;
    }
    /*| Step    | n  | m  | remainder |
      | Initial | 48 | 18 | 0         |
      | 1       | 48 | 18 | 12        |
      | Update  | 18 | 12 | 12        |
      | 2       | 18 | 12 | 6         |
      | Update  | 12 | 6  | 6         |
      | 3       | 12 | 6  | 0         |
      | Update  | 6  | 0  | 0         |*/
    return n;
}

int main(){

    int n;
    int m;

    printf("Enter your num1 : ");scanf("%d", &n);
    printf("Enter your num2 : ");scanf("%d", &m);

    int result = hcf(n, m);

    printf("The HCF of %d and %d is : %d",n , m , result);
    
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
                 Declare n and m
                        |
                        v
                Input two numbers
                        |
                        v
                  Call hcf(n, m)
                        |
                        v
                  Enter hcf()
                        |
                        v
                Check condition: m > 0
                     /       \
                   YES        NO
                    |          |
                    v          v
           remainder = n % m  Return n
                    |          |
                    v          |
                n = m           |
                    |          |
                    v          |
           m = remainder       |
                    |          |
                    v          |
              Repeat loop      |
                    |          |
                    +----<-----+
                               |
                               v
                       Return to main()
                               |
                               v
                       Print the GCD
                               |
                               v
                              END
*/