#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int (*fn_t)(char *, int);

/**
 * fn1 - first character algo
 * @name: string
 * @name_len: int
 *
 * Return: int
 */
int fn1(__attribute__((unused))char *name, int name_len)
{
	return ((name_len ^ 0x3b) & 0x3f);
}

/**
 * fn2 - second character algo
 * @name: string
 * @name_len: int
 *
 * Return: int
 */
int fn2(char *name, int name_len)
{
	unsigned int sum = 0;
	int i = 0;

	while (i < name_len)
		sum += name[i++];
	return ((sum ^ 0x4f) & 0x3f);
}

/**
 * fn3 - third character algo
 * @name: string
 * @name_len: int
 *
 * Return: int
 */
int fn3(char *name, int name_len)
{
	unsigned int prod = 1;
	int i = 0;

	while (i < name_len)
		prod *= name[i++];
	return ((prod ^ 0x55) & 0x3f);
}

/**
 * fn4 - fourth character algo
 * @name: string
 * @name_len: int
 *
 * Return: int
 */
int fn4(char *name, int name_len)
{
	int c = name[0], i = 0;

	while (i < name_len)
	{
		if (c < name[i])
			c = name[i];
		i++;
	}
	srand(c ^ 0xe);
	return (rand() & 0x3f);
}

/**
 * fn5 - fifth character algo
 * @name: string
 * @name_len: int
 *
 * Return: int
 */
int fn5(char *name, int name_len)
{
	unsigned long sum = 0;
	int i = 0;

	while (i < name_len)
	{
		sum += name[i] * name[i];
		i++;
	}
	return ((sum ^ 0xef) & 0x3f);
}

/**
 * fn6 - sixth character algo
 * @name: string
 * @name_len: int
 *
 * Return: int
 */
int fn6(char *name, __attribute__((unused))int name_len)
{
	int i = 0, r;

	while (i++ < name[0])
		r = rand();
	return ((r ^ 0xe5) & 0x3f);
}

/**
 * main - a key generator based on given name
 * @argc: number of args
 * @argv: args vector
 *
 * Return: 1 on failure and 0 on success
 */
int main(int argc, char **argv)
{
char *ref = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	fn_t fn[] = {fn1, fn2, fn3, fn4, fn5, fn6};
	char *name, key[7];
	int name_len, i;

	if (argc != 2)
	{
		printf("Usage: %s <arg>\n", argv[0]);
		exit(1);
	}
	name = argv[1];
	name_len = strlen(name);
	for (i = 0; i < 6; i++)
		key[i] = ref[fn[i](name, name_len)];
	key[7] = '\0';
	printf("%s", key);
	return (0);
}
