#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * print_number - prints an integer.
 * Description: prints any given integer using putchar.
 * @n: the given integer
 */
void print_number(int n)
{
	int i, j, k, l;

	if (n == 0)
	{
		putchar(n + '0');
	}
	if (n < 0)
	{
		l = -n;
		putchar('-');
	}
	while (n != 0)
	{
		if ((n / 10) == 0)
			for (i = 0; i < k; i++)
			{
				n = l;
				for (j = i; j < k; j++)
				{
					n /= 10;
				}
				n %= 10;
				putchar(n + '0');
			}
			l %= 10;
			putchar(l + '0');
		}
		n /= 10;
		k++;
	}
}
