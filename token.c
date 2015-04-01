/*************************
 * Crystopher Echavarria *
 *Simple String Tokenizer* 
 *************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "token.h"

#define MAX_INPUT_LINE 512

int read_line(char **line)
{
        /* Check parameters */
        if( NULL == *line ) {
                    fprintf(stderr, "Error: Input to read_line() is NULL!\n");
                            return -1;
                                }

            /* Read a line */
            (*line)[0] = '\0';
                if( NULL == fgets(*line, MAX_INPUT_LINE, stdin) ) {
                            /* End of input stream */
                            return 1;
                                }

                    /* Strip off the newline */
                    if( '\n' == (*line)[strlen(*line)-1] ) {
                                (*line)[strlen(*line)-1] = '\0';
                                    }

                        return 0;
}

int tokenize_line(char *line)
{
        char * str_ptr = NULL;
            int num_tokens = 0;

                printf("Tokenize Line: \"%s\"\n", line);
                    for( str_ptr  = strtok(line, " ");
                                     NULL    != str_ptr;
                                              str_ptr  = strtok(NULL, " ") ) {
                                printf("\t%d) \"%s\"\n", num_tokens, str_ptr);
                                        ++num_tokens;
                                            }
                        printf("Number of tokens: %d\n", num_tokens);

                            return 0;
}

