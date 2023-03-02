/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: Input string.
 *
 * Return: Pointer to resulting string.
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 32;
}
ptr++;
}
return (str);
}

