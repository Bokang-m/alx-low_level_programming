#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - prints a name
 * @name: the name of a person
 * @f: pointer to the assigned function
 * Return: Always zero
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	return;
	f(name);
}
