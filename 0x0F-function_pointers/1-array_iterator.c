#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array to be iterated
 * @size: the size of the array
 * @action: a pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (!array || !action)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
