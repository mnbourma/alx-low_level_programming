#include <stdio.h>
/**
 * print_numbers - Prints numbers, from 0 to 14 ten times, followed by a new line
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			putchar(j + '0'):
		}
		while (i < 9)
		{
			putchar('\n');
		}
	}
}
