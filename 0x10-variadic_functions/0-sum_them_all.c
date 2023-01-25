#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: this is the number of parameters.
 * Return: the sum of all the given parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vars;
	unsigned int i;
	int sum;

	va_start(vars, n);
	sum = 0;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(vars, int);
		}
	}
	return (sum);
	va_end(vars);
}
