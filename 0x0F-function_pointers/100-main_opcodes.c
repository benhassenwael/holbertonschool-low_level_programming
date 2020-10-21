#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *op = (char *)&main;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", op[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return 0;
}
