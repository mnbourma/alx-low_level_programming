#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i+'0');
		putchar(',');
		putchar(' ');
	}

	putchar('9');

	return 0;
}
