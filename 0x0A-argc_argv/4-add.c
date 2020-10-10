#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers given as args
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		while (--argc)
		{
			for (i = 0; argv[argc][i]; i++)
			{
				if (!isdigit(argv[argc][i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[argc]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
