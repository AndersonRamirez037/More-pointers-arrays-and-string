#include "main.h"
#include <ctype.h>
/*
 * *cap_string - function that capitalizes all words of a string.
 * @char
 * return char.
*/
char *cap_string(char *a){
    int i = 0; 
    while(a[i] != '\0'){
        if(a[i - 1] == ' ' || a[i - 1] == '\t' || a[i - 1] == '\n' ||a[i - 1] == ',' ||a[i - 1] == ';' ||a[i - 1] == '.' ||a[i - 1] == '!' ||a[i - 1] == '?' ||a[i - 1] == '"' ||a[i - 1] == '(' ||a[i - 1] == ')' ||a[i - 1] == '{' ||a[i - 1] == '}'){
            a[i] = toupper(a[i]);
        }
        i++;
    }
    return a;
}