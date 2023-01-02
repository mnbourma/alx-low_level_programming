#include <stdio.h>
#include <stdint.h>
void print_number(int n);
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: this is the given suqare matrix.
 * @size: this is the size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += c3[i][i];
		sum2 += c3[i][size - (i + 1)];
	}
	print_number(sum1);
	putchar(',');
	putchar(' ');
	print_number(sum2);
}
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

