#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 *
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int op, i;

	for (i = n - 1; i > n / 2; i--)
	{
		op = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = op;
	}

