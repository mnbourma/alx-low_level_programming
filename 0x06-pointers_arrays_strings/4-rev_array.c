#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverses an array of integers
 * @a: the array of integers
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	if (n % 2 == 0)
	{
		for (i = 0; i < n / 2; i++)
		{
			j = a[i];
			a[i] = a[n - (i + 1)];
			a[n - (i + 1)] = j;
		}
	}
	else
	{
		for (i = 0; i < (n - 1) / 2 + 1; i++)
		{
			j = a[i];
			a[i] = a[n - (i + 1)];
			a[n - (i + 1)] = j;
		}
	}
}
