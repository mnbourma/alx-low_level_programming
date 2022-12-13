#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabet 10 times in lowervase
 */
void print_alphabet_10x(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 26; j++)
		{
			putchar(alphabets[i]);
		}
		putchar('\n');
	}
}
