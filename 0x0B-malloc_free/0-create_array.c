#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * @size: sixe the array
 * @c: char that initializes the array
 *
 * Return: pointer to the array, or NULL if it fails or if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		ar[j] = c;

	return (ar);
}
