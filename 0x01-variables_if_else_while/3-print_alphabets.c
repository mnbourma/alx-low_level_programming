#include <stdio.h>
#include <ctype.h>
/* Reverse alphabet */
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(toupper(alphabet[i]));
	}
	putchar('\n');
	return (0);
}
