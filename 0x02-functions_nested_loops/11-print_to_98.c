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
		putchar(c + '0');
		putchar(',');
		putchar(' ');
		c--;
	}
	while (c < 98)
        {
                putchar(c + '0');
                putchar(',');
                putchar(' ');
                c--;
        }
	putchar('9');
	putchar('8');
	putchar('\n');
}
