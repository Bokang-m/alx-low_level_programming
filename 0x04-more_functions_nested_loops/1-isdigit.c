#include "main.h"
#include <stdio.h>

/**
*_isdigit - Checks for a digit from 0 through 9
* @c: Int representing a character
* Return: Always 0.
*/

int _isdigit(int c);
{
if (c >= '0' && c <= '9')
{
return (1);
else
return (0);
}
