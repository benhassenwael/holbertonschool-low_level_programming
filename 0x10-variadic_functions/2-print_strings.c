#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		printf("%s", s ? s : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
