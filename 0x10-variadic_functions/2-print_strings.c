#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: this is the string to be printed between numbers.
 * @n: this is the number of integers passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vars;
	unsigned int i;
	char *str;

	va_start(vars, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vars, char*);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vars);
}
