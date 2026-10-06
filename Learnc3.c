// Lesson 3 : Format Specifiers

// Format specifiers = Special tokens that begin with a % symbol,
//                     followed by a character that specifies the datatype
//                     and optional modifiers (width, precision, flags).
//                     They control how data is displayed or interpreted.

#include<stdio.h>

int main(){

    int age = 20;
    float price = 28.9872;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Indrajeet";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n",pi);// lf for long floating
    printf("%c\n", currency);
    printf("%s\n\n", name);

    // Optional modifiers
    
    // width 

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    //we can manipulate the with of the integer
    //here are some manipulations 

    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n\n",num3);

    //Here we have manipulated the length of the integer input
    printf("%3d\n",num1);
    printf("%3d\n",num2);
    printf("%3d\n\n",num3);
    printf("%4d\n",num1);
    printf("%4d\n",num2);
    printf("%4d\n\n",num3);

    //Here we have manipulated the direction of output (LHS Alligned)
    printf("%-4d\n",num1);
    printf("%-4d\n",num2);
    printf("%-4d\n\n",num3);

    //Here we have entered a num 
    printf("%04d\n",num1);
    printf("%04d\n",num2);
    printf("%04d\n\n",num3);

    //Here a operator, mainly use for accounting
    printf("%+d\n",num1);
    printf("%+d\n",num2);
    printf("%+d\n\n",num3);
    
    //Precision : we use %.xf, where x represents no. of decimal points you want after decimal
    // therefore controlling the prcision of the output

    float price1 = 9.332;
    float price2 = 2.332;
    float price3 = 4.321;

    printf("%f\n", price1);
    printf("%f\n", price2);
    printf("%f\n\n", price3);
    printf("%.1f\n", price1);
    printf("%.1f\n", price2);
    printf("%.1f\n\n", price3);
    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n\n", price3);


    // We can control width, Precision and Flag simultaneously

    printf("%+4.2f\n", price1);//flags are just + or - to start from left or right allign
    printf("%+4.2f\n", price2);
    printf("%+4.2f\n\n", price3);

    //Here Lesson 3 ends
    
    return 0;
}