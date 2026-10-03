//Lesson 2 (Variables & Datatypes)

#include<stdio.h>

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



    return 0;
}

