#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Reverse alphabet */
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');

	return (0);
}
