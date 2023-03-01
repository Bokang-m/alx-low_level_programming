#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting sting @dest
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i;

/* Find the length of the destination string */
while (dest[dest_len] != '\0')
dest_len++;

for (i = 0; src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

/* Append the source string to the destination sting */
dest[dest_len + i] = '\0';

/*Add the terminating null byte*/
return (dest);
}
