#include <stdio.h>
#include <string.h>
/**
 * times_table - Times table
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			char ab[] = i * j + '0';
			int size = strlen(ab);
			int index = 0;

			while (index < size)
			{
				putchar(ab[index]);
			}
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (i < 9)
		{
			putchar('\n');
		}
	}
}

