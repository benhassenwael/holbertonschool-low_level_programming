#include "holberton.h"

/**
 * main - main function
 *
 * Description: main func
 * Return: void
 */
int main(void)
{
	char s[] = "Holberton";
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar (s[i]);
	}
	_putchar('\n');
	return (0);
}
