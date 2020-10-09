#include <stdio.h>

/**
 * main - print received arguments
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
