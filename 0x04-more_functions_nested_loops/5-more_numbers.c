#include <stdio.h>
/**
 * more_numbers - Prints 0 to 14 ten times
 **/
void more_numbers(void)
{
	int i, j;
	char c1, c2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			c1 = j + '0';
			if (j > 9)
			{
				c1 = 1 + '0';
				c2 = (j - 10) + '0';
			}
			putchar(c1);
			if (j > 9)
			{
				putchar(c2);
			}
		}
		putchar('\n');
	}
}
