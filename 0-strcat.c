#include "main.h"
#include <string.h>
#include <stdio.h>
/*
 * _strcat - function that concatenates two strings
 * @char
 * return char.
*/
char *_strcat(char *dest, char *src){
    int size = 0,i;
    while (dest[size]){
        size++;
    }
    for(i = 0; src[i] != '\0';i++){
        dest[size] = src[i];
        size++;
    }
    return dest;
}