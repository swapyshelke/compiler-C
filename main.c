// header files - io and stdlib
#include<stdio.h>
#include<stdlib.h>

// enum named TypeSeparator
    // SEMI, OPEN_PAREN, CLOSE_PAREN
typedef enum {
    SEMI,
    OPEN_PAREN,
    CLOSE_PAREN
}TypeSeparator;

// enum named TypeKeyword
    // EXIT

// enum named TypeLiteral
    // INT data type inside it 

// struct named TokenKeyword
    // TypeKeyword type; data type inside it

// struct named as TokenLiteral
    // TypeLiteral type;
    // int value

// struct named as TokenSeparator
    // TypeSeparator type;

// 

// main fnc
    // file pointer of FILE data type
    // fopen(). pass file test.unn and read mode  to fiel pointer
    // current variable of char type, fgetc() to get single char
    // while loop till the current is not equal to EOF
        // if current is equal to ';;
            // pf: FOUND SEMICOLON
        // elif current is equal to '('
            // pf: FOUND OPEN PAREN
        // elif current is equal to ')'
            // pf: FOUND CLOSE PAREN    
        // elf current isdigit
            // pf: FOUND DIGIT
        // else if 
        // print char current
        // assign characters of fiel, into current again

    