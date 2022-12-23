#include <stdio.h>
#include "main.h"
int _putchar(char c);
/**
 * print_diagonal - Prints diagonal made of \
 * @n: number of \ to print
 * */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i < n - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
