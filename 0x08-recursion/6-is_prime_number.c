#include "main.h"

/**
 * primer_function - returns 1 if the imput integer is a prime number
 * @n: number
 * @s: possible times
 * Return: 1 if the integer is a prime number, 0 otherwise
 */
int primer_function(unsigned int n, unsigned int s)
{
	if (n % s == 0)
	{
		if (n == s)
			return (1);
		else
			return (0);
	}
	return (0 + primer_function(n, s + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: 1 if the integer is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (primer_function(n, 2));
}
