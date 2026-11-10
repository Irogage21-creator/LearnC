//Lesson 2 (Character set, Tokens, )

/*C CHARACTER SET:
Every language comes with particular character set.

A character set is the complete collection of characters, symbols, and numbers
that are recognized and allowed in a C program.

In C we are using an ASCII character set which comes with 256 characters. In this
52 alphabets [a-z, A-Z], 10 digits [ 0-9 ], 44 operators [ +, -, *, >,==, = , << , >>, ...
+, 14 separators * , . : ; “ “ ‘ ‘ ,- () <> * +,....+and remaining all are special
Characters.

ASCII (American Standard Code for Information Interchange)

CHARACTERS          ASCII VALUES
a-z                    97-122
A-Z                    65-90
0-9                    48-57
*                       42
+                       43
Space                   32
Esc                     27
Back space              8

ENGLISH LANGUAGE        C LANGUAGE
26 ALPHABETS            256 ASCII CHAR’S
English words           Keywords-32
English sentences       Instructions
English paragraphs      Programs
English documents       software


Token in C:
Token is the smallest unit of a program that has meaning to the compiler.

Types of Tokens:
1. Keyword
2. Identifier
3. Datatype
4. Variable
5. Operator


1. Keyword
->Keywords is Pre-define words 
->All Keywords must be written in snake case(Lower case)
->Keywords can't be used on place of a variable
->In C language we have total 32 keywords

2. Identifier : Name of a variable, Function, those called as Identifier

1. Use of Alphabets, Digits, and Underscore
An identifier can contain:
● Alphabets: A to Z and a to z
● Digits: 0 to 9
● Special symbol: Underscore (_)
Examples: shubham1, hi_shubham, shubham158

2. An Identifier Must Start with an Alphabet or Underscore
The first character must be an alphabet or an underscore (_).
Examples: number, _value, total1

3. An Identifier Cannot Start with a Digit
An identifier must not begin with a number.
● Valid: num1, value2
● Invalid: 1num, 2value

4. Spaces Are Not Allowed
An identifier cannot contain spaces between characters.
● Valid: total_marks
● Invalid: total marks

5. No Fixed Length Limit in the Basic Naming Rule
C does not impose a simple universal maximum length for identifiers, but compiler
and standard rules may limit how many characters are significant.
Examples: student_name, total_student_marks

6. Keywords Cannot Be Used as Identifiers
Reserved C keywords cannot be used as identifiers.
● Valid: number, student
● Invalid: int, return, if

7. Identifiers Are Case-Sensitive
Uppercase and lowercase letters are treated as different characters.
Examples: total, Total, and TOTAL are three different identifiers.


3. Datatype : Datatype is Determine what type of value store/hold inside the
variable and what type of operation perform the variable those called as datatype :

There are 2 types of datatypes :
1)Primitive Datatype
2)Non-Primitive Datatype

In C language we are having 3 basic data types
1. int – To store non-decimal numbers
2. float – To store decimal numbers
3. char – To stores alphabets, numbers and special char

Total data types are divided into 3 types.

1. Primitive data types

2. User defined data types
These are the data types created by the user.
1. structure
2. union
3. enum

4. Variable In C
->Variable is Container in which We Can stor Data.
->A variable is a name given to a memory location where a value can be
stored and accessed during program execution.

syntax :

data_type variable_name = value;

ex int age = 20;


5. Operators in C
● Operators is Special Symbol, It’s Work On the Operands/Variable
Those Called as Operators
in the above example, operand is age, = is a operator, 
operand is basically a variable

Based on no of operands participating in operation, the operators
divided into 3 types.
1. Unary operator: Require one operand.
Eg. a++, a--, ++a, --a, !a, ~a, +a, -a, sizeof(a)

2. Binary operator: Require two operands.
Eg: a+b, a-b, a>b, a<=b, a!=b, a==b, a=b,
a<<b,....

3. Ternary / conditional operator [ ? : ] :
Require 3 operands or expressions.
conditional part ? true part : false part ;
Eg: a > b ? a : b;

Based on operation the operators are divided into several types.

1)Assignment operator [ = ]:
It copies the value on its right side into the variable on its left side. In
assignment operation, the left side operand should be a variable. Constant /
strings / expressions on left side not allowed.

*/
