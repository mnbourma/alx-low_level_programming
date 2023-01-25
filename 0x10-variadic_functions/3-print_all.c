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
	int i;
	char *str;

	va_start(vars, format);
	i = 0;
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vars, char));
			case 'i':
				printf("%d", va_arg(vars, int));
			case 'f':
				printf("%f", va_arg(vars, float));
			case 's':
				str = va_arg(vars, char*);
				if (str)
				{
					printf("%s", str);
				}
				else
				{
					printf("(nil)");
				}
		}
		if (i < strlen(format) - 1)
		{
			printf(",");
		}
		i++;
	}
	printf("\n");
	va_end(vars);
}
