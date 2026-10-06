// Lesson 5 : User input

#include<stdio.h>
#include<string.h> //Thid is a standard file which allows us to use various string related functions

int main(){

    int age;
    age = 0;
    float gpa;
    gpa = 0.0f;
    char grade;
    grade = '\0';// \0 is called null terminator character
    char name[30] = "";//Array size is 30
    

    /*printf("%d\n",age);
    printf("%f\n",gpa);         // this will show undefined behaviour if we left 
    printf("%c\n",grade);       // the variables unassigned
    printf("%s\n",name);*/

    //So how do we get user input in our program ?
    // we will have to use scanf("format specifier", &variable) function for int, double, float and char datatypes
    // for arrays (string), the story is little complicated

    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    printf("Enter your gpa : ");
    scanf("%f", &gpa);
    printf("Your gpa is %f\n", gpa);

    printf("Enter your grade : ");
    scanf(" %c", &grade); // Remember that there is a newline charater buffer /n in scanf function
    //Therefore remember to put a gap between double quotations and the format Identifier
    printf("Your grade is %c\n", grade);

    
    //For Arrays :

    //Scanf stops reading the string if there is a break in the string
    //therefore we need a different funcion to give string input

    getchar(); //this function will get rid of the newline character in the beggining
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin); // here we have used fgets(string, string size, stdin)
    // this function contains a \n at the end of the string
    // to get rid of it, we need something advanced
    name[strlen(name) - 1] = '\0';// to use this we need to include a header file named string.h
    // Do not get overwhelmed, we will understand this later
    printf("Your name is %s", name);

    


    // Here Lesson 5 ends 

    return 0;
}