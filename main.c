// header files - io and stdlib
#include<stdio.h>
#include<stdlib.h>

// ctype.h: for classifying and modifying characters
#include<ctype.h>

// 1. we need tokens

// enum named TypeSeparator
    // SEMI, OPEN_PAREN, CLOSE_PAREN
typedef enum {
    SEMI,
    OPEN_PAREN,
    CLOSE_PAREN
}TypeSeparator;

// enum named TypeKeyword
    // EXIT
typedef enum {
    EXIT,
}TypeKeyword;

// enum named TypeLiteral
    // INT data type inside it 
typedef enum {
    INT,
}TypeLiteral;

// struct named TokenKeyword
    // TypeKeyword type; data type inside it
typedef struct {
    TypeKeyword type;
}TokenKeyword;

// struct named as TokenLiteral
    // TypeLiteral type;
    // int value
typedef struct {
    TypeLiteral type;
    int value;
}TokenLiteral;

// struct named as TokenSeparator
    // TypeSeparator type;
typedef struct {
    TypeSeparator type;
}TokenSeparator;

// lexer function

// pass FILE *file to lexer function
void lexer(FILE *file){


     // current variable of char type, fgetc() to get single char
    char current = fgetc(file);
    // while loop till the current is not equal to EOF
    while(current != EOF) {
        // if current is equal to ';;
            // pf: FOUND SEMICOLON
            if(current == ';'){
                printf("FOUND SEMICOLON");
            // elif current is equal to '('
            // pf: FOUND OPEN PAREN
            } else if (current == '('){
                printf("FOUND OPEN PAREN");
            }
            // elif current is equal to ')'
            // pf: FOUND CLOSE PAREN   
            else if(current == ')'){
                printf("FOUND CLOSE PAREN");
            }  
        // else if current isdigit
            // pf: FOUND DIGIT
            else if(isdigit(current)){
                printf("FOUND DIGIT: %d\n", current = '0');
            } 
        // else if current isalpha
        // print char current
        else if(current == isalpha()){
            printf("isalpha found");
        }
        // assign characters of file, into current again
    }

}

// main fnc
int main(){


    // file pointer of FILE data type
    FILE *file;
    // fopen(). pass file test.unn and read mode to file pointer
    file = fopen("test.unn", "r");
    


    // call lexer function, with file parameter passing to it
    lexer(file);

   

}
    