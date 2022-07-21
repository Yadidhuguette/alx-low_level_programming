#include "main.h"

/**
 * square_function - returns the natural square root
 * @n: number
 * @s: possible time
 * Return: square root of n, -1 if n does not have any
 */
int square_function(int n, int s)
{
	if (s % (n / s) == 0)
	{
		if (s * (n / s) == n)
			return (s);
		else
			return (-1);
	}
	return (0 + square_function(n, s + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_function(n, 2));
}
