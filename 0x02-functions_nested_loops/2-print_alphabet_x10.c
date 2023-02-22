#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char abc;
	int n;

	n = 0;

	while (n < 10)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			_putchar(abc);
			abc++;
		}
		_putchar('\n');
		n++;
	}
}
