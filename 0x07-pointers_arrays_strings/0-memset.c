/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte used to fill the memory area
 * @n: number of bytes to be filled starting from pointer s
 *
 * Return: pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}

	return (s);
}
