#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: pointer to the destination buffer
 * @src: pointer to source buffer
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];

	return (dest);
}
