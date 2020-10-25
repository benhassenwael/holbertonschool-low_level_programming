#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char c, *s, *separator = ""

	va_start(ap, format);
	while (format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				separator = ", ";
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s)
				{
					printf("%s%s", separator, s);
					separator = ", ";
					break;
				}
				printf("%s(nil)", separator);
				separator = ", ";
				break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
