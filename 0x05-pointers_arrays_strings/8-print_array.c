#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array
 * @a: integer array
 * @n: number of integers to print
 */
void print_array(int *a, int n)
{
	int i, j;
	char s[50];

	for (i = 0; i < n; i++)
	{
		sprintf(s,  "%d, ", a[i]);
		for (j = 0; j < (int)strlen(s) - 2; j++)
		{
			putchar(s[j]);
		}
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
