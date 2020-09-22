#include <unistd.h>

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
