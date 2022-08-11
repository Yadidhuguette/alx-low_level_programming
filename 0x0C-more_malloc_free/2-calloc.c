#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer, NULL if number or size = 0 or failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = malloc(nmemb * size);

	if (t == NULL)
		return (NULL);

	for (n = 0; n < (nmemb * size); n++)
		t[n] = 0;

	return (t);
}
