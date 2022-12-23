#include <stdio.h>
/**
 * main - prints 1 to 100
 **/
void main(void)
{
	int i, j;

	j = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else if (i % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else
		{
			putchar((i % 10) + '0');
			if (i > 9)
				putchar(j + '0');
		}
		if (j == 9)
			j = 0;
		if (i < 99)
			putchar(' ');
		j++;
	}
	putchar('\n');
}
