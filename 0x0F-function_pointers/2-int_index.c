#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used o compare values
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0. -1 if no element matches and if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (j = 0; j < size; j++)
			if (cmp(array[j]))
				return (j);
	}

	return (-1);
}
