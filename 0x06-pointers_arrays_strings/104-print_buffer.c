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
		for (j = i; j < i + 10; i += 2)
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
			if (j % 10 == 8)
			{
				break;
			}
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (isprint(b[j]))
				{
					putchar(b[j]);
				}
				else
				{
					putchar('.');
				}
			}
			if (j % 10 == 9)
			{
				break;
			}
		}
		putchar('\n');
	}
}
/**
 * print_10 - prints the content of the buffer
 * Description: prints in ten bytes the content of a buffer
 * @b: the given buffer
 * @index: index of the loop
 * @size: buffer's size
 */
void print_10(char *b, int index, int size)
{
	int j;
	
	for (j = index; j < index + 10; j++)
	{
		if (j < size)
		{
			if (isprint(b[j]))
			{
				putchar(b[j]);
			}
			else
			{
				putchar('.');
			}
		}
		if (j % 10 == 9)
		{
			break;
		}
	}
}
