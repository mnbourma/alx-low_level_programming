#include <stdio.h>
int _putchar(char c);
/**
 * print_square - prints a square made of #
 * @size: size of the square
 * */
void print_square(int size)
{
	int i, j;
	
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			if (i < size - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
