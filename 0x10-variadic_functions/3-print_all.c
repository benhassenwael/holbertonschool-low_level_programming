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
	int i = 0, from_list;
	char c, *s;

	va_start(ap, format);
	while (format[i])
	{
		c = format[i];
		from_list = 0;
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				from_list = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				from_list = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				from_list = 1;
				break;
			case 's':
				s = va_arg(ap, char *);
				from_list = 1;
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		}
		if (format[i + 1] && from_list)
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
