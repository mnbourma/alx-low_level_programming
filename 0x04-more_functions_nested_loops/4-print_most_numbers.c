#include <stdio.h>
/**
 * print_most_numbers - Prints the numbers, from 0 to 9
 **/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2)
		{
			if (i != 4)
			{
				putchar(i + '0');
			}
		}
	}
	putchar('\n');
}
