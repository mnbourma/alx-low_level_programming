#include <stdio.h>
#include <stdint.h>
/**
 * print_number - prints an integer.
 * Description: prints any given integer using putchar.
 * @n: the given integer
 */
void print_number(int n)
{
	int64_t i;

	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	for (i = n / (n - 1); i < n + 1; i++)
	{
		int64_t j;

		j = n;
		do {
			if (i == j)
			{
				putchar((i % 10) + '0');
				i = i * 10 - 1;
				if (i == -1)
				{
					i = 0;
				}
				break;
			}
			j /= 10;
		} while (j > 0);
	}
}
