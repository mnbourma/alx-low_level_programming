#include <stdio.h>
/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line - do not print 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
