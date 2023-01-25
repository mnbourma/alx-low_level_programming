#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints anything.
 * @format: this is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list vars;
	int i = 0;
	char *str, *sep = ", ";

	va_start(vars, format);
	while (i < (int)strlen(format))
	{
		if (i > len - 2)
		{
			sep = "";
		}
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(vars, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(vars, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(vars, double), sep);
				break;
			case 's':
				str = va_arg(vars, char*);
				if (str)
				{
					printf("%s%s", str, sep);
				}
				else
				{
					printf("(nil)%s", sep);
				}
		}
		i++;
	}
	printf("\n");
	va_end(vars);
}
