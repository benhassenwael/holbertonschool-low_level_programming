#include <stddef.h>

/**
 * array_iterator - execute a given function as a parameter on
 * each element of an array
 * @array: array to execute function on
 * @size: size of array
 * @action: function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
