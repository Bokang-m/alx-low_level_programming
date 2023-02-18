#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
int a;


for (a = '0'; a <= '9'; a++)
{
putchar(a);

if (a == '9')
{
break;
}

putchar(',');
putchar (' ');
}

putchar('\n');

return (0);

}
