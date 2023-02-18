#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)

{
char alph_num;

for (alph_num = '0'; alph_num <= '9'; alph_num++)
{putchar(alph_num);
}

for (alph_num = 'a' ; alph_num <= 'f'; alph_num++)
{
putchar(alph_num);
}

putchar ('\n');

return (0);

}

