#include <stdio.h>
/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line - do not print 2 and 4
 */
void print_most_numbers(void)
{
	int i;
	char c[] = "01356789";

	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
}
