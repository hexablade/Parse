#ifndef TOKEN_H_
#define TOKEN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STRING_LENGTH 512

int read_line(char **line);
int tokenizer(char *line);

#endif

