#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int k, l, op;

	for (k = 0; k < n - 1; k++)
	{
		for (l = k + 1; l > 0; j--)
		{
			op = *(a + l);
			*(a + l) = *(a + (l - 1));
			*(a + (l - 1)) = op;
		}
	}
}

