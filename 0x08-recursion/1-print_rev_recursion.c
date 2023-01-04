#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: this is the given string to reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
