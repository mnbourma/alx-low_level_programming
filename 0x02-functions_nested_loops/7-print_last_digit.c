#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of an number
 *
 * @c: number to pass
 *
 * Return: last digit
 */
int print_last_digit(int c)
{
	char n[] = c + '0';
	int last_digit;
	
	last_digit = n[sizeof(n) / sizeof(n[0]) - 1];
	return (last_digit);
}
