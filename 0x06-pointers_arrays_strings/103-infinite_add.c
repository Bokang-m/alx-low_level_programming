#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 *
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result, or 0 if result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0, j = 0;

/* find lengths of n1 and n2 */
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

/* add digits right to left, store result in r */
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
if (size_r <= 0)
return (0);
r[size_r - 1] = sum % 10 + '0';
carry = sum / 10;
size_r--;
}

/* if buffer is too small to store result, return 0 */
if (size_r <= 0)
return (0);

/* shift result to beginning of buffer and terminate string */
while (r[i] != '\0')
{
r[size_r - 1] = r[i];
size_r--;
i++;
}
r[size_r - 1] = '\0';

return (r);
}

