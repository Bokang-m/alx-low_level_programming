/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number to find square root of
 *
 * Return: the square root of n, -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function to find the square root recursively
 * @n: number to find square root of
 * @i: possible square root
 *
 * Return: the square root of n, -1 if no natural square root
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}

