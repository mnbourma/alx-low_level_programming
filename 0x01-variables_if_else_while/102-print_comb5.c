#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * Description - prints all possible combinations of two two-digit numbers
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{

			if (i != j)
			{
				putchar(((i - (i % 10)) / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar(((j - (j % 10)) / 10) + '0');
				putchar((j % 10) + '0');
				if (i < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
