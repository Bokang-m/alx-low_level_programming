#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @abc: the character to be checked
 * Return: 1 if abc is a letter, lowercase or uppercase,
 * 0 otherwise
 */
int _isalpha(int abc)
{
	return ((abc >= 'a' && abc <= 'z') || (abc >= 'A' && abc <= 'Z'));
}
