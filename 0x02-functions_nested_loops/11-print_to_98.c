#include <stdio.h>
/**
 * print_to_98 - prints natural number to 98
 *
 * @c: number to pass
 */
void print_to_98(int c)
{
	while (c > 98)
	{
		putchar('%d', c);
		putchar(',');
		putchar(' ';
		c--;
	}
	while (c < 98)
        {
                putchar('%d', c);
                putchar(',');
                putchar(' ';
                c--;
        }
	putchar('9');
	putchar('\n');
}
