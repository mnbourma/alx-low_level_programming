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
	char base16[] = "0123456789abcdef";
	int i;

	for (i = 0; i < strlen(base16); i++)
	{
		putchar(base16[i]);
	}

	putchar('\n');

	return (0);
}
