#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array
 * @s: the given string
 */
void print_array(int *a, int n)
{
	int i, j;
	char s[50];

	for (i = 0; i < n; i ++)
	{	
		sprintf(s,  "%d, ", a[i]);
		for (j = 0; j < strlen(s) - 2; j++)
		{
			putchar(s[j]);
		}
		while (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
