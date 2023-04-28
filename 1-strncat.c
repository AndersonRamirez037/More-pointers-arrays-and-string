#include "main.h"
#include <string.h>
#include <stdio.h>
/*
 * _strncat - function that concatenates two strings 
 * @char, int
 * return char.
*/
char *_strncat(char *dest, char *src, int n){
    int size = 0, i = 0;
    while(dest[size]){
        size++;
    }
    while(i < n && src[i] != '\0'){
        dest[size] = src[i];
        size++;
        i++;
    }
    dest[size] = '\0';
    return dest;
}