#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * Description - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
