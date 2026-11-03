//Lesson 1 (Understanding the basic skeleton of code in C, and writing our first code)

/*Syntax of the programming language is taken care of by the Compiler.
The Compiler generates Error if a user does not follow the syntax rules.*/

/*Semantics is taken care of by the C compiler. It ensures that the statements
follow the rules of the C language. If the code violates semantic rules, the compiler
generates a compile-time error.
(i.e., the code may be syntactically correct but logically or meaningfully invalid
according to C language rules.)*/

/*Basically the Programming languages are divided
into 3 types.

1. Machine Language
● Created using binary code (0 and 1)
● It is the only language directly understood by the computer
● Very difficult for humans to understand
Example:
10000111

2. Low-Level Language
created with English-like shortcuts called MNEMONICS.
Eg: sub , plz, gd mrg

3. High-Level Language
● Created using simple English words
● Easy to read, write, and understand
● Machine-independent
● Requires a compiler or interpreter
Examples:
C, C++, Java, Python

There are type Lang:

1) Statically(Strongly) typed language :-
The languages where data type is compulsory before initialization of a variable are called statically typed
languages.
In these languages we can hold same kind of value during the execution of the program.
Ex:- C,C++,Core Java, C#

2) Dynamically(Loosly) typed language :-
The languages where data type is not compulsory and it is optional before initialization of a variable then
it is called dynamically typed language.
In these languages we can hold different kind of value during the execution of the program.
Ex:- Visual Basic, Javascript, Python


What is a compiler?

We write programs in a human-understandable language, called the source code
(source program). However, the computer understands instructions in machine
language (binary: 0 and 1).

Therefore, translators are used to convert the source program into a form that the
computer can understand.

The main types of translators are:
Compiler – Translates the entire source program at once.
Compilers convert the total source code into binary code at once by leaving error
lines.
Interpreter – Translates and executes the program line by line.
Compiler and interpreter both used to convert high level programs to machine
language

Computer programs:
->A computer is an electronic device that stores and processes information.
Examples of computers include smartphones, tablets, laptops, desktops, and
servers.
->Technically, a program is a sequence/set of instructions that
a computer can run. Programs help people accomplish everyday tasks, create
new technology, and have fun.

What is software?
->Software is a set of programs that instructs a computer to
perform specific .tasks
Examples of Software:
● System Software: Windows, Linux, Android
● Application Software: MS Word, Google Chrome, VLC Media Player
● Programming Software: Java, Python, C Compiler


What is Hardware?
->Hardware is the physical part of a computer, and software is the logical
(programming) part that makes the hardware work.
Examples of Hardware:
● Keyboard
● Mouse
● Monitor
● CPU (Processor)
● Hard Disk
● Printer


What is Data?
Data is a collection of raw facts and figures that do not have any meaning by
themselves.
Examples of Data
● Numbers: 10, 25, 100
● Text: "Shubham", "Computer"
● Symbols: @, #, %
● Images, audio, video (before processing)

Example:
85 → Data
85 marks in Python → Information


What is Information?
Information is processed data that is meaningful, useful, and understandable
to humans.

GitHub?
GitHub is an online platform used to store, manage, share, and collaborate on
source code using Git (version control system).


C Language?
->C is Programming lang we Can Write the Program.
->C Open Source Programming Lang.
->C is basically a high level language with low level features. Hence C is also
called a middle level language.
The low level features used to design system software like operating systems,
device drivers and translators.
High level features used to design application software like calculator, antivirus,
calendar, media player,..

->HISTORY OF C
Basically C language introduced in 1972, by “DENNIS RITCHIE”, One of the
programmers in AT & T [ American Telephone & Telegraph ]Bell labs, Murray
Hills, New Jersey, USA.
Basically the C language was introduced to rewrite the UNIX operating
system.


Program Structure in C : 

#include<stdio.h> (# is called pre processing directive, include is a statement which tells the program to include the stdio.h header file)
stdio.h is a header file stores all the functions which will be required for basic input and output operations

int main(){ (int is a return type, main is a user defined function which is responsible for user inputs, it is the entry point of the program)

    ------code-------

    return 0;
}
above given is the skeleton of a C program

Output Statements in C?
● Output statements are used to display information on the console/screen in a
  C program.
● printf() is a predefined library function available in the stdio.h header file.

Main Purpose of printf()
● The main purpose of printf() is to print/display a message or output on the
console/screen.
Important Point
● printf() returns an integer value, which represents the number of characters
successfully printed.*/

#include<stdio.h>

int main(){

    printf("%s %s %d\n", "My name is", "Indrajeet Patil, My age is",20);

    printf("Kavita and Vaishnvi are best friends\rKumar ");

/*\r is called Carriage Return.
It moves the cursor to the beginning of the current line.
Therefore, the text after \r starts writing from the beginning of the line and can
overwrite the previously printed characters*/

    return 0;
}
    //Here Lesson 1 ends
