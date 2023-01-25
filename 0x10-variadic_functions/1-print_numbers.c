#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: this is the string to be printed between numbers.
 * @n: this is the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vars;
	int i;

	va_start(vars, separator, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(vars, int));
		if (separator)
		{
			printf("%s", separator);
		}
	}
	putchar("\n");
	va_end(vars);
}
