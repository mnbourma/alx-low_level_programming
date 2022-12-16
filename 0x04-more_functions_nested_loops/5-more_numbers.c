#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * more_numbers - Prints numbers, from 0 to 14 ten times, followed by a new line
 */
void more_numbers(void)
{
	int i;
   	int j;
	int k;
    	char c[2];

    	for (i = 0; i < 10; i++)
    	{
        	for (j = 0; j < 15; j++)
        	{
			c[0] = j + '0';
            		if (j > 9)
           		{
               			c[0] = 1 + '0';
                		c[1] = (j - 10) + '0';
            		}
			for (k = 0; k < strlen(c); k++)
			{
				putchar(c[k]);
			}
        	}
        	if (i < 9)
        	{
            		putchar('\n');
        	}
    	}
}
