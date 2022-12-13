#include <stdio.h>
#include <string.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char value[] = "_putchar";
	int i;

	for(i = 0; i < 8; i++)
	{
		putchar(value[i]);
	}
	putchar('\n');
	return (0);
}
