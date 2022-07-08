#include "main'h"

/**
 * largest_number - returns the lrgest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
		printf("%d is the largest number\n", a++);
	}
	else if (b > c && b > a)
	{
		largest = b;
		printf("%d is the largest number\n", b++);
	}
	else
	{
		largest = c;
		printf("%d is the largest number\n", c++);
	}

	return (largest);
}
