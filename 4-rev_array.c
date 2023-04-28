#include "main.h"
#include <stdio.h>
/*
 * reverse_array - function that reverses the content of an array of integers.
 * @int
 * return nothing.
*/
void reverse_array(int *a, int n){
    int temp = 0, i = 0;
    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}