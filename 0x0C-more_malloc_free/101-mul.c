#include <stdlib.h>
#include "holberton.h"

/**
 * error_exit - print Error and exit
 *
 */
void error_exit(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * init_arr - allocate an array of unsigned ints
 * of a given size and initialized by 0
 * @size: number of elements
 *
 * Return: pointer to array and exits on failure
 */
void *init_arr(unsigned int size)
{
	unsigned int *arr;
	unsigned int i;

	arr = malloc(size * sizeof(unsigned int));
	if (arr == NULL)
		error_exit();
	for (i = 0; i < size; i++)
		arr[i] = 0;
	return (arr);
}

/**
 * calc_carry - calculate the carry of result
 * @arr: array of result
 * @size: size of array
 *
 */
void calc_carry(unsigned int *arr, int size)
{
	int i;

	for (i = size - 1; i > 0; i--)
	{
		if (arr[i] > 9)
		{
			arr[i - 1] += arr[i] / 10;
			arr[i] = arr[i] % 10;
		}
	}
}

/**
 * print_number - print number from array
 * @arr: array to print from
 * @size: size of array
 *
 */
void print_number(unsigned int *arr, int size)
{
	int i = 0, start = 0;

	while (i < size)
	{
		if (arr[i] != 0)
			start = 1;
		if (start || i == size - 1)
			_putchar(arr[i] + '0');
		i++;
	}
	_putchar('\n');
	free(arr);
}

/**
 * main - multiply two positive numbers
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 or exit 98 on failure
 */

int main(int argc, char *argv[])
{
	char *s1;
	char *s2;
	unsigned int *res_arr;
	unsigned int size1, size2;
	int i, j, k;

	if (argc != 3)
		error_exit();
	s1 = argv[1];
	s2 = argv[2];
	for (size1 = 0; s1[size1]; size1++)
		if (s1[size1] < '0' || s1[size1] > '9')
			error_exit();
	for (size2 = 0; s2[size2]; size2++)
		if (s2[size2] < '0' || s2[size2] > '9')
			error_exit();
	res_arr = init_arr(size1 + size2);
	for (i = size1 - 1; i >= 0; i--)
	{
		for (j = size2 - 1, k = i + j + 1; j >= 0; j--, k--)
		{
			res_arr[k] += (s1[i] - '0') * (s2[j] - '0');
		}
	}
	calc_carry(res_arr, size1 + size2);
	print_number(res_arr, size1 + size2);
	return (0);
}
