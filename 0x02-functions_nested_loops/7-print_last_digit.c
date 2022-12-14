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
	char n[50];
	int last_digit;

	n[50] = c + '0';
	last_digit = n[sizeof(n) / sizeof(n[0]) - 1];
	return (last_digit);
}
