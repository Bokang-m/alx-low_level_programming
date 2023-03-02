#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: Pointer to encoded string
 */
char *rot13(char *s)
{
char *str = s;
int i, j;
char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = rot[j];
break;
}
}
}
return (s);
}
