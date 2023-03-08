#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to a string.
 *
 * Return: The length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to a string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	return (1);
	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: Pointer to a string.
 * @i: Starting index of the string.
 * @j: Ending index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int i, int j)
{
	if (i == j)
	return (1);
	if (s[i] != s[j])
	return (0);
	if (i < j + 1)
	return (check_palindrome(s, i + 1, j - 1));
	return (1);
}

