//Assignment : Check whether a no. is even or odd :

#include<stdio.h>

int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if( n%2 == 0){printf("The Number is even which is %d", n);}
    else if(n%2 != 0){
        printf("The Number is an odd number which is %d",n);
    }


    return 0;
}