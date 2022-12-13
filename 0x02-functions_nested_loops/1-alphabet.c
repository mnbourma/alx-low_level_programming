#include <stdio.h>
/* print_alphabet - print alphabet in lowervase */
void print_alphabet(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
}
