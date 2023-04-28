#include "main.h"
#include <stdio.h>
/*
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @char
 * return char.
*/
char *string_toupper(char *a){
    char *i = a;
    while (*i){
        if(*i >= 'a' && *i <= 'z'){
            *i = *i - 'a' + 'A';
        }
        i++;
    }
    return a;
}