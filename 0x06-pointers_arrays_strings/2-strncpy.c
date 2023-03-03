#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to the destination.
 * @src: Pointer to the source string.
 *@n: Maximum number of bytes to copy
 *
 * Return: A pointer to the resulting sting
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
