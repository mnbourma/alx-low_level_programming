#include <stdio.h>
/**
 * print_line - prints a line of length n.
 * @n: line length.
 * */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			putchar('_');
	}
	putchar('\n');
}
