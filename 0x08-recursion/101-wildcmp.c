/**
 * wildcmp - Compares two strings, with the second one containing wildcard
 * character *
 * @s1: The first string
 * @s2: The second string, which may contain the wildcard character *
 *
 * Return: 1 if the strings are considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{

		if (*(s2 + 1) == '\0')
		{
	/* If the * is the last character, the match is successful */
			return (1);
		}
		else if (*s1 == '\0')
		{

			return (0);
		}
		else
		{

			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{

		return (*s1 == *s2);
	}
	else if (*s1 == *s2)
	{

		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{

		return (0);
	}
}

