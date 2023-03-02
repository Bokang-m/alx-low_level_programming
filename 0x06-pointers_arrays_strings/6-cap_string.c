#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: The capitalized string.
 */
char *cap_string(char *str)
{
int abc;
int new_word = 1; /* flag to indicate the start of a new word */

for (abc = 0; str[abc] != '\0'; abc++)
{
if (new_word && isalpha(str[abc])) /* if the current character is alphabetic and it's the start of a new word */
{
str[abc] = toupper(str[abc]); /* capitalize it */
new_word = 0; /* unset the flag */
}
else if (str[abc] == ' ' || str[abc] == '\t' || str[abc] == '\n' ||
str[abc] == ',' || str[abc] == ';' || str[abc] == '.' ||
str[abc] == '!' || str[abc] == '?' || str[abc] == '"' ||
str[abc] == '(' || str[abc] == ')' || str[abc] == '{' ||
str[abc] == '}')
{
new_word = 1; /* set the flag for the next word */
}
}

return (str);
}
