#include <stdio.h>
/**
 * print_to_98 - prints natural number to 98
 *
 * @c: number to pass
 */
void print_to_98(int c)
{
	char number[] = c + '0';

	while (c > 98)
	{
		putchar(number);
		putchar(',');
		putchar(' ';
		c--;
	}
	while (c < 98)
        {
                putchar(number);
                putchar(',');
                putchar(' ';
                c--;
        }
	putchar('9');
	putchar('\n');
}
