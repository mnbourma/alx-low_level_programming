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
	
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x", b[j]);
			}
			else
			{
				printf("  ");
			}
			if (j + 1 < size)
			{
				printf("%02x ", b[j + 1]);
			}
			else
			{
				printf("   ");
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
