#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: represents int a
 * @b: represents int b
 */
 
 void swap_int(int *a, int *b)
{
    int chg = *a;
    *a = *b;
    *b = chg;
}
