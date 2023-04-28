#include "main.h"
#include <stdio.h>
/*
 * _strncpy - function that copies a string.
 * @char, int
 * return 
*/
char *_strncpy(char *dest, char *src, int n){
    char *ptr = dest;
    while (*src && n--) {
        *dest++ = *src++;
    }
    if (n > 0) {
        *dest = '\0';
    }
    return ptr;
}