#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints numbers, from 0 to 14 ten times, followed by a new line
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		if (i < 9)
		{
			_putchar('\n');
		}
	}
}
