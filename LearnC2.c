//Lesson 2 (Variables & Datatypes)

#include<stdio.h>
#include<stdbool.h>

int main(){

    // variable = A reusable container for a value
    //            Behaves as if it were the value it contains

    //int datatype (stores integer value)
    
    int age = 20;
    int year = 2026;
    int marks = 89;

    printf("I am %d years old\n", age);
    // Here %d is format specifire, which specifies which datatype
    // is getting printed using print function
    // here d stands for decimal and generally used as a FS for int datatype

    printf("This is year %d \n", year);
    printf("You have scored %d marks out of 100 in your maths test!! \n", marks);

    // float datatype (Stores decimal value)
    
    float gpa = 9.24;
    float height = 184.576;
    printf("Your CGPA is %f \n",gpa);
    //here %f is a format specifier
    //C has a default habbit of storing up to 6 decimal points
    //to limit this we use %.xf, where x represents 
    //no. of decimal points you want after decimal

    //here is an example

    printf("Your CGPA is %.2f \n",gpa);
    printf("Your height is %.3f cm\n", height);



    //double datatype (Also stores decimal portions, but has no default limit also it offers more precision)

    double pi = 3.1415925358979;
    double e = 2.7182818284590;

    printf("The value of pi upto 12 decimals is %.12lf\n", pi);
    printf("The value of e upto 12 decimals is %.12lf\n", e);
    //format specifier is %.xlf

    //Char datatype (Use to store a single character);

    char currency = '$' ;
    char grade = 'A';
    char symbol = '!';

    printf("The currency of USA is %c\n", currency);
    printf("Your grade is %c\n", grade);
    printf("The exclamation mark is '%c'\n\n", symbol);
    //format specifier is %c

    
    //Array datatype (basically string datatype, but in C)

    // char name[]= "string";
    // format specifier is %s, s for string
    char name[]= "Indrajeet Patil";
    char food[]= "Masala Dosa";
    char country[]= "INDIA";

    printf("My name is %s\n", name);
    printf("My favorite food is %s\n", food);
    printf("My motherland is %s\n", country);

    //Bool datatype (True(1) or False(0))

    // To use bool, we need to include a header file
    // <stdbool.h>

    bool isstudent = true;
    bool isrich = true;
    bool forsale = true;

    if(isstudent){
        printf("You are a student\n");
    }
    else{
        printf("You are not a student\n");
    }

    if(isrich){
        printf("You are Rich\n");
    }
    else{
        printf("You are not Rich\n");
    }

    if(forsale){
        printf("This Item is for sale\n");
    }
    else{
        printf("This Item is not for sale\n");
    }


    //Here Lesson 2 ends

    return 0;
}

