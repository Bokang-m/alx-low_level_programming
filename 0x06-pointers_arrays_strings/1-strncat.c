#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: Number of bytes
 *
 * Return: A pointer to the resulting sting @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	dest_len++;

	/* Concatenate at most n bytes from src */
	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

	/* Append the source string to the destination sting */
	dest[dest_len + i] = '\0';

	/*Add the terminating null byte*/
	return (dest);
}
