#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */

char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *codes = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
				{
					str[i] = codes[j];
					break;
				}			
		}		
	}
	return (str);
}
