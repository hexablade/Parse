#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "token.h"

#define MAX_INPUT_LINE 512


int main(int argc, char * argv[])
{
    char * input = NULL;
    int ret = 0;
    
    /* Allocate memory */
    input = (char *)malloc(sizeof(char) * (MAX_INPUT_LINE+1) );
    if( NULL == input ) {
        fprintf(stderr, "Error: unable to allocate %d characters!\n",
                (MAX_INPUT_LINE+1));
        return -1;
    }
    
    /* Read input */
    printf("\n");
    printf("Input:  ");
    fflush(NULL);
    
    ret = read_line(&input);
    if( 0 > ret ) {
        fprintf(stderr, "Error: Reading input!\n");
        return -1;
    }
    else if(0 == ret ) {
        /* Display tokenized string */
        tokenizer(input);
    }
    else {
        printf("\n");
    }
    
    /* Cleanup */
    if( NULL != input ) {
        free(input);
        input = NULL;
    }
    
    return 0;
}




