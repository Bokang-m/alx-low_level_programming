/**
 * swap_int - Swaps the values of two integers
 * @a: represents pointer to the first integer
 * @b: represents pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int chg;

	chg = *a;
	*a = *b;
	*b = chg;
}
