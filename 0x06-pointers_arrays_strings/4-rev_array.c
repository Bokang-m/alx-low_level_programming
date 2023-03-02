#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of array in the elements.
 *
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
int b, c, tmp;

for (b = 0, c = n - 1; b < c; b++, c--)
{
tmp = a[b];
a[b] = a[c];
a[c] = tmp;
}
}
