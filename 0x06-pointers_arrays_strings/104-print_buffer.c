#include <stdio.h>
/**
 * print_buffer - prints a buffer contents
 * Description: this funtion prints ten bytes per line
 * @b: the given buffer
 * @size: given buffer size*/
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j + 1 < size)
			{
				printf("%02x%02x ", b[j], b[j + 1]);
			}
			else if (j < size)
			{
				printf("%02x   ", b[j]);
			}
			else
			{
				printf("     ");
			}
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size && isprint(b[j]))
			{
				putchar(b[j]);
			}
			else if (j < size)
			{
				putchar('.');
			}
		}
		putchar('\n');
	}
}
