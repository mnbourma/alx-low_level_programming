#include <stdio.h>
#include <string.h>
/**
 * print_buffer - prints a buffer
 * Description: prints a buffer
 * @b: the buffer
 * @size: buffer size
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size == 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; i += 2)
		{
			printf("%02x%02x ", b[j], b[j + 1]);
		}
		for (j = i; j < i + 10; j++)
		{
			putchar(b[j]);
		}
		putchar('\n');
	}
}
