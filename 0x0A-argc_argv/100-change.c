#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change
 * for an amount of money
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, n, cents, change = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 1)
		printf("0\n");
	else
	{
		for (i = 0; i < 5 && cents; i++)
		{
			n = cents / coin[i];
			change += n;
			cents -= n * coin[i];
		}
		printf("%d\n", change);
	}
	return (0);
}
