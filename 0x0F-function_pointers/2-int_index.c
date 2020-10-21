/**
 * int_index - search for an integer
 * @array: array to search into
 * @size: size of the array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index of int or -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
