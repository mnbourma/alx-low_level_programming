#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * Description - prints all possible different combinations of three digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				if (i != j)
				{
					if (i != k)
					{
						if (j != k)
						{
							putchar(i + '0');
							putchar(j + '0');
							putchar(k + '0');
							if (i < 7)
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
