#include <stdio.h>

/**
 * main - print the number of args passed into the program
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
