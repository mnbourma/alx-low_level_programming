#include <stdio.h>
/**
 * main - prints 1 tot 14 ten times
 */
void fizz(void);
void buzz(void);
int main(void)
{
	int i, j, k;

	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 0)
		{
			j = i / 10;
			k = 0;
		}
		if (i % 3 == 0)
		{
			fizz();
		}
		else if (i % 5 == 0)
		{
			buzz();
		}
		else
		{
			if (i > 9)
			{
				putchar(j + '0');
				putchar(k + '0');
			}
			else
			{
				putchar(i + '0');
			}
		}
		if (i > 9)
		{
			k++;
		}
		if (i < 99)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
void fizz(void)
{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
}
void buzz(void)
{
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
}
