#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverses an array of integers
 * @a: the array of integers
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int n;

		n = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = n;
	}
}
