#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int putchar(void)
{
	char value[] = "_putchar";
	int i;

	for(i = 0; i < strlen(value); i++) {
		putchar(value[i]);
	}
	putchar('\n');
	return (0);
}
