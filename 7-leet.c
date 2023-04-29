#include "main.h"
#include <string.h>
/*
 * *leet - function that encodes a string into 1337.
 * @char
 * return char.
*/
char *leet(char *a){
    char *s = a;
    while (*s != '\0') {
        char c = *s;
        if (c == 'a' || c == 'A') {
            c = '4';
        } else if (c == 'e' || c == 'E') {
            c = '3';
        } else if (c == 'i' || c == 'I') {
            c = '1';
        } else if (c == 'o' || c == 'O') {
            c = '0';
        } else if (c == 's' || c == 'S') {
            c = '5';
        } else if (c == 't' || c == 'T') {
            c = '7';
        }
        *s = c;
        s++;
    }
    return a; 
}
