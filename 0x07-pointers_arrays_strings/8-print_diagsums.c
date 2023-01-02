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
	for (i = 0; i < size * size; i += size + 1)
	{
		sum1 += a[i];
	}
	for (i = 0; i < size; i++)
	{
		sum2 += a[(size - 1) * i + size - 1];
	}
	print_number(sum1);
	putchar(',');
	putchar(' ');
	print_number(sum2);
	putchar('\n');
}
/**
 * print_number - prints an integer.
 * Description: prints any given integer using putchar.
 * @n: the given integer
 */
void print_number(int n)
{
	int i, j, s[100];

	j = 0;
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	for (i = n; i > 0; i /= 10)
	{
		s[j] = i % 10;
		j++;
	}
	for (i = 0; i < j; i++)
	{
		putchar(s[j - (i + 1)] + '0');
	}
}

