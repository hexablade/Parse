#ifndef TOKEN_H_
#define TOKEN_H_
#include <stdio.h>

#define STRING_LENGTH 512
//Token stack structure
typedef struct Tokenizing 
{
    
    char string[STRING_LENGTH];
    int location;
    int column;
    int row;

}Token;


// Initializes the token stack structures
Token init_token(){
    
    Token t;

   t.location = 0;
   t.column = 0;
   t.row = 0;

   return t;
}

void tokenizer(ch);

#endif

